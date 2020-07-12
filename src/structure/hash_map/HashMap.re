let createEmpty = (): HashMapType.t2('a) => Js.Dict.empty();

let get = (key: string, map: HashMapType.t2('a)) =>
  Js.Dict.get(map, key);

let entries = (map: HashMapType.t2('a)): array((Js.Dict.key, 'a)) =>
  map |> Js.Dict.entries;

let _mutableSet = (key: string, value, map) => {
  Js.Dict.set(map, key, value);
  map;
};

let _createEmpty = (): Js.Dict.t('a) => Js.Dict.empty();

let copy = (map: HashMapType.t2('a)): HashMapType.t2('a) =>
  map
  |> entries
  |> ArrayUtils.reduceOneParam(
       (. newMap, (key, value)) => newMap |> _mutableSet(key, value),
       _createEmpty(),
     );