

      module State{
        let create = State.create;


      }
      

      module StateData{
        let setState = StateData.setState;

let getState = StateData.getState;

let getStateData = StateData.getStateData;

let stateData = StateData.stateData;


      }
      

      module StateDataType{
        
      }
      

      module StateType{
        
      }
      

      module ArcballCameraController{
        let getLookFrom = ArcballCameraController.getLookFrom;

let init = ArcballCameraController.init;

let setDistance = ArcballCameraController.setDistance;

let unsafeGetDistance = ArcballCameraController.unsafeGetDistance;

let setWheelSpeed = ArcballCameraController.setWheelSpeed;

let unsafeGetWheelSpeed = ArcballCameraController.unsafeGetWheelSpeed;

let setRotateSpeed = ArcballCameraController.setRotateSpeed;

let unsafeGetRotateSpeed = ArcballCameraController.unsafeGetRotateSpeed;

let setTarget = ArcballCameraController.setTarget;

let unsafeGetTarget = ArcballCameraController.unsafeGetTarget;

let setTheta = ArcballCameraController.setTheta;

let unsafeGetTheta = ArcballCameraController.unsafeGetTheta;

let setPhi = ArcballCameraController.setPhi;

let unsafeGetPhi = ArcballCameraController.unsafeGetPhi;

let setIsDrag = ArcballCameraController.setIsDrag;

let getIsDrag = ArcballCameraController.getIsDrag;

let setCurrentArcballCameraController = ArcballCameraController.setCurrentArcballCameraController;

let unsafeGetCurrentArcballCameraController = ArcballCameraController.unsafeGetCurrentArcballCameraController;

let create = ArcballCameraController.create;


      }
      

      module ArcballCameraControllerType{
        
      }
      

      module CameraView{
        let update = CameraView.update;

let setProjectionMatrix = CameraView.setProjectionMatrix;

let unsafeGetProjectionMatrix = CameraView.unsafeGetProjectionMatrix;

let setViewMatrix = CameraView.setViewMatrix;

let unsafeGetViewMatrix = CameraView.unsafeGetViewMatrix;

let setCameraPosition = CameraView.setCameraPosition;

let unsafeGetCameraPosition = CameraView.unsafeGetCameraPosition;

let setCurrentCameraView = CameraView.setCurrentCameraView;

let unsafeGetCurrentCameraView = CameraView.unsafeGetCurrentCameraView;

let create = CameraView.create;


      }
      

      module CameraViewType{
        
      }
      

      module DirectionLight{
        let getLightCount = DirectionLight.getLightCount;

let getAllLights = DirectionLight.getAllLights;

let setPosition = DirectionLight.setPosition;

let unsafeGetPosition = DirectionLight.unsafeGetPosition;

let setIntensity = DirectionLight.setIntensity;

let unsafeGetIntensity = DirectionLight.unsafeGetIntensity;

let create = DirectionLight.create;


      }
      

      module DirectionLightType{
        
      }
      

      module Geometry{
        let getAllGeometries = Geometry.getAllGeometries;

let getCount = Geometry.getCount;

let getAllIndexData = Geometry.getAllIndexData;

let getAllVertexData = Geometry.getAllVertexData;

let setIndexData = Geometry.setIndexData;

let unsafeGetIndexData = Geometry.unsafeGetIndexData;

let setVertexData = Geometry.setVertexData;

let unsafeGetVertexData = Geometry.unsafeGetVertexData;

let computeIndexCount = Geometry.computeIndexCount;

let computeVertexCount = Geometry.computeVertexCount;

let computeNormalsCount = Geometry.computeNormalsCount;

let computeVerticesCount = Geometry.computeVerticesCount;

let buildSphereIndexData = Geometry.buildSphereIndexData;

let buildSphereVertexData = Geometry.buildSphereVertexData;

let buildPlaneIndexData = Geometry.buildPlaneIndexData;

let buildPlaneVertexData = Geometry.buildPlaneVertexData;

let buildTriangleIndexData = Geometry.buildTriangleIndexData;

let buildTriangleVertexData = Geometry.buildTriangleVertexData;

let create = Geometry.create;


      }
      

      module GeometryType{
        
      }
      

      module PBRMaterial{
        let getAllPBRMaterials = PBRMaterial.getAllPBRMaterials;

let getCount = PBRMaterial.getCount;

let setRoughness = PBRMaterial.setRoughness;

let unsafeGetRoughness = PBRMaterial.unsafeGetRoughness;

let setMetalness = PBRMaterial.setMetalness;

let unsafeGetMetalness = PBRMaterial.unsafeGetMetalness;

let setSpecular = PBRMaterial.setSpecular;

let unsafeGetSpecular = PBRMaterial.unsafeGetSpecular;

let setDiffuse = PBRMaterial.setDiffuse;

let unsafeGetDiffuse = PBRMaterial.unsafeGetDiffuse;

let create = PBRMaterial.create;


      }
      

      module PBRMaterialType{
        
      }
      

      module Shader{
        let setHitGroupIndex = Shader.setHitGroupIndex;

let unsafeGetHitGroupIndex = Shader.unsafeGetHitGroupIndex;

let create = Shader.create;


      }
      

      module ShaderType{
        
      }
      

      module Transform{
        let buildModelMatrix = Transform.buildModelMatrix;

let buildNormalMatrix = Transform.buildNormalMatrix;

let create = Transform.create;

let setScale = Transform.setScale;

let getScale = Transform.getScale;

let setRotation = Transform.setRotation;

let getRotation = Transform.getRotation;

let setTranslation = Transform.setTranslation;

let getTranslation = Transform.getTranslation;


      }
      

      module TransformAnimation{
        let getAllDynamicTransforms = TransformAnimation.getAllDynamicTransforms;

let setDynamicTransform = TransformAnimation.setDynamicTransform;

let create = TransformAnimation.create;


      }
      

      module TransformAnimationType{
        
      }
      

      module TransformType{
        
      }
      

      module GameObject{
        let getAllGeometryGameObjects = GameObject.getAllGeometryGameObjects;

let unsafeGetGeometry = GameObject.unsafeGetGeometry;

let unsafeGetShader = GameObject.unsafeGetShader;

let unsafeGetPBRMaterial = GameObject.unsafeGetPBRMaterial;

let unsafeGetTransform = GameObject.unsafeGetTransform;

let addArcballCameraController = GameObject.addArcballCameraController;

let addCameraView = GameObject.addCameraView;

let addTransformAnimation = GameObject.addTransformAnimation;

let addDirectionLight = GameObject.addDirectionLight;

let addShader = GameObject.addShader;

let addPBRMaterial = GameObject.addPBRMaterial;

let addGeometry = GameObject.addGeometry;

let addTransform = GameObject.addTransform;

let create = GameObject.create;


      }
      

      module GameObjectType{
        
      }
      

      module EventType{
        
      }
      

      module Global{
        
      }
      

      module Log{
        let error = Log.error;

let log = Log.log;

let printComplete = Log.printComplete;

let print = Log.print;

let buildFatalMessage = Log.buildFatalMessage;

let fatal = Log.fatal;


      }
      

      module MostUtils{
        let fromEvent = MostUtils.fromEvent;


      }
      

      module Performance{
        
      }
      

      module WebGPU{
        
      }
      

      module WebGPUUtils{
        
      }
      

      module Director{
        let start = Director.start;

let addPassFuncs = Director.addPassFuncs;

let addUpdateFunc = Director.addUpdateFunc;

let addInitFunc = Director.addInitFunc;

let load = Director.load;

let setFrameIndex = Director.setFrameIndex;

let getFrameIndex = Director.getFrameIndex;

let setTime = Director.setTime;

let getTime = Director.getTime;


      }
      

      module Angle{
        let getRadToDeg = Angle.getRadToDeg;

let getDegToRad = Angle.getDegToRad;


      }
      

      module MathUtils{
        let convertDecimalToHex = MathUtils.convertDecimalToHex;


      }
      

      module Matrix3{
        let transposeSelf = Matrix3.transposeSelf;

let createEmptyMatrix3 = Matrix3.createEmptyMatrix3;

let createIdentityMatrix3 = Matrix3.createIdentityMatrix3;


      }
      

      module Matrix4{
        let setTranslation = Matrix4.setTranslation;

let copy = Matrix4.copy;

let scale = Matrix4.scale;

let setLookAt = Matrix4.setLookAt;

let transposeSelf = Matrix4.transposeSelf;

let invertTo3x3 = Matrix4.invertTo3x3;

let invert = Matrix4.invert;

let buildPerspective = Matrix4.buildPerspective;

let multiply = Matrix4.multiply;

let getEulerAngles = Matrix4.getEulerAngles;

let getScaleTuple = Matrix4.getScaleTuple;

let getRotationTuple = Matrix4.getRotationTuple;

let getTranslationTuple = Matrix4.getTranslationTuple;

let getTranslationTypeArray = Matrix4.getTranslationTypeArray;

let getZ = Matrix4.getZ;

let getY = Matrix4.getY;

let getX = Matrix4.getX;

let fromTranslationRotationScale = Matrix4.fromTranslationRotationScale;

let fromTranslation = Matrix4.fromTranslation;

let createIdentityMatrix4 = Matrix4.createIdentityMatrix4;


      }
      

      module Quaternion{
        let setFromAxisAngle = Quaternion.setFromAxisAngle;

let getEulerAngles = Quaternion.getEulerAngles;

let setFromEulerAngles = Quaternion.setFromEulerAngles;

let setFromMatrix = Quaternion.setFromMatrix;

let multiply = Quaternion.multiply;

let invert = Quaternion.invert;

let normalize = Quaternion.normalize;

let length = Quaternion.length;

let conjugate = Quaternion.conjugate;


      }
      

      module Vector3{
        let dot = Vector3.dot;

let transformQuat = Vector3.transformQuat;

let normalize = Vector3.normalize;

let cross = Vector3.cross;

let lerp = Vector3.lerp;

let scale = Vector3.scale;

let sub = Vector3.sub;

let multiply = Vector3.multiply;

let add = Vector3.add;

let transformMat4Tuple = Vector3.transformMat4Tuple;


      }
      

      module Vector4{
        let transformMat4Tuple = Vector4.transformMat4Tuple;


      }
      

      module Scene{
        let init = Scene.init;


      }
      

      module Tuple2{
        let getFirst = Tuple2.getFirst;


      }
      

      module Tuple3{
        let getFirst = Tuple3.getFirst;


      }
      

      module ArrayUtils{
        let push = ArrayUtils.push;

let range = ArrayUtils.range;

let zipWith = ArrayUtils.zipWith;

let reduceOneParami = ArrayUtils.reduceOneParami;

let reduceOneParam = ArrayUtils.reduceOneParam;


      }
      

      module ArrayUtils2{
        let removeDuplicateItems = ArrayUtils2.removeDuplicateItems;


      }
      

      module ColorType{
        
      }
      

      module DataViewUtils{
        let setBigInt64LittleEndian = DataViewUtils.setBigInt64LittleEndian;


      }
      

      module HashMap{
        let copy = HashMap.copy;

let entries = HashMap.entries;

let get = HashMap.get;

let createEmpty = HashMap.createEmpty;


      }
      

      module HashMapType{
        
      }
      

      module ImmutableHashMap{
        let unsafeGet = ImmutableHashMap.unsafeGet;

let get = ImmutableHashMap.get;

let set = ImmutableHashMap.set;

let createEmpty = ImmutableHashMap.createEmpty;


      }
      

      module MutableHashMap{
        let get = MutableHashMap.get;

let set = MutableHashMap.set;

let createEmpty = MutableHashMap.createEmpty;


      }
      

      module NullUtils{
        let isNotInMap = NullUtils.isNotInMap;

let isInMap = NullUtils.isInMap;


      }
      

      module ImmutableSparseMap{
        let getValidKeys = ImmutableSparseMap.getValidKeys;

let getValidValues = ImmutableSparseMap.getValidValues;

let set = ImmutableSparseMap.set;

let has = ImmutableSparseMap.has;

let unsafeGet = ImmutableSparseMap.unsafeGet;

let get = ImmutableSparseMap.get;

let copy = ImmutableSparseMap.copy;

let createEmpty = ImmutableSparseMap.createEmpty;


      }
      

      module MutableSparseMap{
        let set = MutableSparseMap.set;

let has = MutableSparseMap.has;

let get = MutableSparseMap.get;

let copy = MutableSparseMap.copy;

let createEmpty = MutableSparseMap.createEmpty;


      }
      

      module SparseMap{
        let getValidKeys = SparseMap.getValidKeys;

let getValidValues = SparseMap.getValidValues;

let has = SparseMap.has;

let get = SparseMap.get;

let copy = SparseMap.copy;

let createEmpty = SparseMap.createEmpty;


      }
      

      module SparseMapType{
        
      }
      

      module TypeArray{
        
      }
      

      module ManageAccelerationContainer{
        let buildContainers = ManageAccelerationContainer.buildContainers;


      }
      

      module ManageBuffer{
        let setMat3DataToBufferData = ManageBuffer.setMat3DataToBufferData;


      }
      

      module OperateAccelerationContainer{
        let setData = OperateAccelerationContainer.setData;

let unsafeGetData = OperateAccelerationContainer.unsafeGetData;


      }
      

      module Pass{
        let setTextureView = Pass.setTextureView;

let unsafeGetTextureView = Pass.unsafeGetTextureView;

let setFloat32StorageBufferTypeArrayData = Pass.setFloat32StorageBufferTypeArrayData;

let unsafeGetFloat32StorageBufferTypeArrayData = Pass.unsafeGetFloat32StorageBufferTypeArrayData;

let setStorageBufferData = Pass.setStorageBufferData;

let unsafeGetStorageBufferData = Pass.unsafeGetStorageBufferData;

let setUniformBufferData = Pass.setUniformBufferData;

let unsafeGetUniformBufferData = Pass.unsafeGetUniformBufferData;

let setJitterArr = Pass.setJitterArr;

let getJitter = Pass.getJitter;

let setAccumulatedFrameIndex = Pass.setAccumulatedFrameIndex;

let getAccumulatedFrameIndex = Pass.getAccumulatedFrameIndex;


      }
    