; ModuleID = './ex.mod'
source_filename = "./ex.mod"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-i128:128-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

@_t7Example1c = private constant i64, !dbg !0
@_t7Example10fileHandle = private global i64, !dbg !4
@_t7Example12readComplete = private global i1, !dbg !6

define void @_t7Example11ReadChannel(i64 %id) !dbg !11 {
entry:
    #dbg_value(i64 %id, !16, !DIExpression(), !17)
  ret void
}

!llvm.dbg.cu = !{!9}

!0 = !DIGlobalVariableExpression(var: !1, expr: !DIExpression())
!1 = distinct !DIGlobalVariable(name: "c", linkageName: "_t7Example1c", scope: !2, file: !2, line: 3, type: !3, isLocal: false, isDefinition: true)
!2 = !DIFile(filename: "ex.mod", directory: "/home/mkurnosov/teaching-compilers/fall-2024/compilers-fall-lec5/compilers-fall-lec5/src-tinylang/build/tools/driver/.")
!3 = !DIBasicType(name: "INTEGER", size: 64, encoding: DW_ATE_signed)
!4 = !DIGlobalVariableExpression(var: !5, expr: !DIExpression())
!5 = distinct !DIGlobalVariable(name: "fileHandle", linkageName: "_t7Example10fileHandle", scope: !2, file: !2, line: 6, type: !3, isLocal: false, isDefinition: true)
!6 = !DIGlobalVariableExpression(var: !7, expr: !DIExpression())
!7 = distinct !DIGlobalVariable(name: "readComplete", linkageName: "_t7Example12readComplete", scope: !2, file: !2, line: 7, type: !8, isLocal: false, isDefinition: true)
!8 = !DIBasicType(name: "BOOLEAN", size: 1, encoding: DW_ATE_boolean)
!9 = distinct !DICompileUnit(language: DW_LANG_Modula2, file: !2, producer: "tinylang", isOptimized: false, runtimeVersion: 0, emissionKind: FullDebug, globals: !10)
!10 = !{!0, !4, !6}
!11 = distinct !DISubprogram(name: "ReadChannel", linkageName: "_t7Example11ReadChannel", scope: !2, file: !2, line: 9, type: !12, scopeLine: 9, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !9, retainedNodes: !15)
!12 = !DISubroutineType(types: !13)
!13 = !{!14, !3}
!14 = !DIBasicType(tag: DW_TAG_unspecified_type, name: "void")
!15 = !{}
!16 = !DILocalVariable(name: "id", arg: 1, scope: !11, file: !2, line: 9, type: !3)
!17 = !DILocation(line: 9, column: 23, scope: !11)
