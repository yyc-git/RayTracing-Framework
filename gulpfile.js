var gulp = require("gulp");
var path = require("path");

gulp.task("generateIndex", function (done) {
    var generate = require("tiny-wonder-generate-index");
    var rootDir = path.join(process.cwd(), "src"),
        destDir = "./src/";

    generate.generate("/", rootDir, ["**/*.re"], destDir, {
        exclude: ["Index.re"],
        replaceAPIModuleNameFunc: (moduleName) => moduleName.replace("JsAPI", "")
    });

    done();
});
