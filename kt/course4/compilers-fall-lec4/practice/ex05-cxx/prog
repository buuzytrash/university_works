; ModuleID = 'prog.cpp'
source_filename = "prog.cpp"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

%"class.std::ios_base::Init" = type { i8 }
%"class.std::basic_ostream" = type { i32 (...)**, %"class.std::basic_ios" }
%"class.std::basic_ios" = type { %"class.std::ios_base", %"class.std::basic_ostream"*, i8, i8, %"class.std::basic_streambuf"*, %"class.std::ctype"*, %"class.std::num_put"*, %"class.std::num_get"* }
%"class.std::ios_base" = type { i32 (...)**, i64, i64, i32, i32, i32, %"struct.std::ios_base::_Callback_list"*, %"struct.std::ios_base::_Words", [8 x %"struct.std::ios_base::_Words"], i32, %"struct.std::ios_base::_Words"*, %"class.std::locale" }
%"struct.std::ios_base::_Callback_list" = type { %"struct.std::ios_base::_Callback_list"*, void (i32, %"class.std::ios_base"*, i32)*, i32, i32 }
%"struct.std::ios_base::_Words" = type { i8*, i64 }
%"class.std::locale" = type { %"class.std::locale::_Impl"* }
%"class.std::locale::_Impl" = type { i32, %"class.std::locale::facet"**, i64, %"class.std::locale::facet"**, i8** }
%"class.std::locale::facet" = type <{ i32 (...)**, i32, [4 x i8] }>
%"class.std::basic_streambuf" = type { i32 (...)**, i8*, i8*, i8*, i8*, i8*, i8*, %"class.std::locale" }
%"class.std::ctype" = type <{ %"class.std::locale::facet.base", [4 x i8], %struct.__locale_struct*, i8, [7 x i8], i32*, i32*, i16*, i8, [256 x i8], [256 x i8], i8, [6 x i8] }>
%"class.std::locale::facet.base" = type <{ i32 (...)**, i32 }>
%struct.__locale_struct = type { [13 x %struct.__locale_data*], i16*, i32*, i32*, [13 x i8*] }
%struct.__locale_data = type opaque
%"class.std::num_put" = type { %"class.std::locale::facet.base", [4 x i8] }
%"class.std::num_get" = type { %"class.std::locale::facet.base", [4 x i8] }
%class.ExceptionEx = type { i8 }

$_ZN11ExceptionExC2Ev = comdat any

$_ZN11ExceptionExD2Ev = comdat any

$__clang_call_terminate = comdat any

@_ZStL8__ioinit = internal global %"class.std::ios_base::Init" zeroinitializer, align 1, !dbg !0
@__dso_handle = external hidden global i8
@_ZTIi = external constant i8*
@_ZTId = external constant i8*
@_ZSt4cout = external global %"class.std::basic_ostream", align 8
@.str = private unnamed_addr constant [21 x i8] c"Hi from construction\00", align 1
@.str.1 = private unnamed_addr constant [20 x i8] c"Hi from destruction\00", align 1
@llvm.global_ctors = appending global [1 x { i32, void ()*, i8* }] [{ i32, void ()*, i8* } { i32 65535, void ()* @_GLOBAL__sub_I_prog.cpp, i8* null }]

; Function Attrs: noinline uwtable
define internal void @__cxx_global_var_init() #0 section ".text.startup" !dbg !865 {
  call void @_ZNSt8ios_base4InitC1Ev(%"class.std::ios_base::Init"* noundef nonnull align 1 dereferenceable(1) @_ZStL8__ioinit), !dbg !867
  %1 = call i32 @__cxa_atexit(void (i8*)* bitcast (void (%"class.std::ios_base::Init"*)* @_ZNSt8ios_base4InitD1Ev to void (i8*)*), i8* getelementptr inbounds (%"class.std::ios_base::Init", %"class.std::ios_base::Init"* @_ZStL8__ioinit, i32 0, i32 0), i8* @__dso_handle) #3, !dbg !869
  ret void, !dbg !867
}

declare void @_ZNSt8ios_base4InitC1Ev(%"class.std::ios_base::Init"* noundef nonnull align 1 dereferenceable(1)) unnamed_addr #1

; Function Attrs: nounwind
declare void @_ZNSt8ios_base4InitD1Ev(%"class.std::ios_base::Init"* noundef nonnull align 1 dereferenceable(1)) unnamed_addr #2

; Function Attrs: nounwind
declare i32 @__cxa_atexit(void (i8*)*, i8*, i8*) #3

; Function Attrs: mustprogress noinline optnone uwtable
define dso_local noundef i32 @_Z3bari(i32 noundef %0) #4 personality i8* bitcast (i32 (...)* @__gxx_personality_v0 to i8*) !dbg !870 {
  %2 = alloca i32, align 4
  %3 = alloca %class.ExceptionEx, align 1
  %4 = alloca %class.ExceptionEx, align 1
  %5 = alloca i8*, align 8
  %6 = alloca i32, align 4
  store i32 %0, i32* %2, align 4
  call void @llvm.dbg.declare(metadata i32* %2, metadata !871, metadata !DIExpression()), !dbg !872
  call void @llvm.dbg.declare(metadata %class.ExceptionEx* %3, metadata !873, metadata !DIExpression()), !dbg !874
  call void @_ZN11ExceptionExC2Ev(%class.ExceptionEx* noundef nonnull align 1 dereferenceable(1) %3), !dbg !874
  call void @llvm.dbg.declare(metadata %class.ExceptionEx* %4, metadata !875, metadata !DIExpression()), !dbg !876
  invoke void @_ZN11ExceptionExC2Ev(%class.ExceptionEx* noundef nonnull align 1 dereferenceable(1) %4)
          to label %7 unwind label %13, !dbg !876

7:                                                ; preds = %1
  %8 = load i32, i32* %2, align 4, !dbg !877
  %9 = icmp eq i32 %8, 1, !dbg !879
  br i1 %9, label %10, label %21, !dbg !880

10:                                               ; preds = %7
  %11 = call i8* @__cxa_allocate_exception(i64 4) #3, !dbg !881
  %12 = bitcast i8* %11 to i32*, !dbg !881
  store i32 1, i32* %12, align 16, !dbg !881
  invoke void @__cxa_throw(i8* %11, i8* bitcast (i8** @_ZTIi to i8*), i8* null) #11
          to label %35 unwind label %17, !dbg !881

13:                                               ; preds = %1
  %14 = landingpad { i8*, i32 }
          cleanup, !dbg !882
  %15 = extractvalue { i8*, i32 } %14, 0, !dbg !882
  store i8* %15, i8** %5, align 8, !dbg !882
  %16 = extractvalue { i8*, i32 } %14, 1, !dbg !882
  store i32 %16, i32* %6, align 4, !dbg !882
  br label %29, !dbg !882

17:                                               ; preds = %24, %10
  %18 = landingpad { i8*, i32 }
          cleanup, !dbg !883
  %19 = extractvalue { i8*, i32 } %18, 0, !dbg !883
  store i8* %19, i8** %5, align 8, !dbg !883
  %20 = extractvalue { i8*, i32 } %18, 1, !dbg !883
  store i32 %20, i32* %6, align 4, !dbg !883
  call void @_ZN11ExceptionExD2Ev(%class.ExceptionEx* noundef nonnull align 1 dereferenceable(1) %4) #3, !dbg !882
  br label %29, !dbg !882

21:                                               ; preds = %7
  %22 = load i32, i32* %2, align 4, !dbg !884
  %23 = icmp eq i32 %22, 2, !dbg !886
  br i1 %23, label %24, label %27, !dbg !887

24:                                               ; preds = %21
  %25 = call i8* @__cxa_allocate_exception(i64 8) #3, !dbg !888
  %26 = bitcast i8* %25 to double*, !dbg !888
  store double 3.140000e+00, double* %26, align 16, !dbg !888
  invoke void @__cxa_throw(i8* %25, i8* bitcast (i8** @_ZTId to i8*), i8* null) #11
          to label %35 unwind label %17, !dbg !888

27:                                               ; preds = %21
  %28 = load i32, i32* %2, align 4, !dbg !889
  call void @_ZN11ExceptionExD2Ev(%class.ExceptionEx* noundef nonnull align 1 dereferenceable(1) %4) #3, !dbg !882
  call void @_ZN11ExceptionExD2Ev(%class.ExceptionEx* noundef nonnull align 1 dereferenceable(1) %3) #3, !dbg !882
  ret i32 %28, !dbg !882

29:                                               ; preds = %17, %13
  call void @_ZN11ExceptionExD2Ev(%class.ExceptionEx* noundef nonnull align 1 dereferenceable(1) %3) #3, !dbg !882
  br label %30, !dbg !882

30:                                               ; preds = %29
  %31 = load i8*, i8** %5, align 8, !dbg !882
  %32 = load i32, i32* %6, align 4, !dbg !882
  %33 = insertvalue { i8*, i32 } undef, i8* %31, 0, !dbg !882
  %34 = insertvalue { i8*, i32 } %33, i32 %32, 1, !dbg !882
  resume { i8*, i32 } %34, !dbg !882

35:                                               ; preds = %24, %10
  unreachable
}

; Function Attrs: nofree nosync nounwind readnone speculatable willreturn
declare void @llvm.dbg.declare(metadata, metadata, metadata) #5

; Function Attrs: noinline optnone uwtable
define linkonce_odr dso_local void @_ZN11ExceptionExC2Ev(%class.ExceptionEx* noundef nonnull align 1 dereferenceable(1) %0) unnamed_addr #6 comdat align 2 !dbg !890 {
  %2 = alloca %class.ExceptionEx*, align 8
  store %class.ExceptionEx* %0, %class.ExceptionEx** %2, align 8
  call void @llvm.dbg.declare(metadata %class.ExceptionEx** %2, metadata !891, metadata !DIExpression()), !dbg !893
  %3 = load %class.ExceptionEx*, %class.ExceptionEx** %2, align 8
  %4 = call noundef nonnull align 8 dereferenceable(8) %"class.std::basic_ostream"* @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%"class.std::basic_ostream"* noundef nonnull align 8 dereferenceable(8) @_ZSt4cout, i8* noundef getelementptr inbounds ([21 x i8], [21 x i8]* @.str, i64 0, i64 0)), !dbg !894
  %5 = call noundef nonnull align 8 dereferenceable(8) %"class.std::basic_ostream"* @_ZNSolsEPFRSoS_E(%"class.std::basic_ostream"* noundef nonnull align 8 dereferenceable(8) %4, %"class.std::basic_ostream"* (%"class.std::basic_ostream"*)* noundef @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_), !dbg !896
  ret void, !dbg !897
}

declare i32 @__gxx_personality_v0(...)

declare i8* @__cxa_allocate_exception(i64)

declare void @__cxa_throw(i8*, i8*, i8*)

; Function Attrs: noinline nounwind optnone uwtable
define linkonce_odr dso_local void @_ZN11ExceptionExD2Ev(%class.ExceptionEx* noundef nonnull align 1 dereferenceable(1) %0) unnamed_addr #7 comdat align 2 personality i8* bitcast (i32 (...)* @__gxx_personality_v0 to i8*) !dbg !898 {
  %2 = alloca %class.ExceptionEx*, align 8
  store %class.ExceptionEx* %0, %class.ExceptionEx** %2, align 8
  call void @llvm.dbg.declare(metadata %class.ExceptionEx** %2, metadata !899, metadata !DIExpression()), !dbg !900
  %3 = load %class.ExceptionEx*, %class.ExceptionEx** %2, align 8
  %4 = invoke noundef nonnull align 8 dereferenceable(8) %"class.std::basic_ostream"* @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%"class.std::basic_ostream"* noundef nonnull align 8 dereferenceable(8) @_ZSt4cout, i8* noundef getelementptr inbounds ([20 x i8], [20 x i8]* @.str.1, i64 0, i64 0))
          to label %5 unwind label %8, !dbg !901

5:                                                ; preds = %1
  %6 = invoke noundef nonnull align 8 dereferenceable(8) %"class.std::basic_ostream"* @_ZNSolsEPFRSoS_E(%"class.std::basic_ostream"* noundef nonnull align 8 dereferenceable(8) %4, %"class.std::basic_ostream"* (%"class.std::basic_ostream"*)* noundef @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_)
          to label %7 unwind label %8, !dbg !903

7:                                                ; preds = %5
  ret void, !dbg !904

8:                                                ; preds = %5, %1
  %9 = landingpad { i8*, i32 }
          catch i8* null, !dbg !901
  %10 = extractvalue { i8*, i32 } %9, 0, !dbg !901
  call void @__clang_call_terminate(i8* %10) #12, !dbg !901
  unreachable, !dbg !901
}

; Function Attrs: mustprogress noinline optnone uwtable
define dso_local noundef i32 @_Z3fooi(i32 noundef %0) #4 personality i8* bitcast (i32 (...)* @__gxx_personality_v0 to i8*) !dbg !905 {
  %2 = alloca i32, align 4
  %3 = alloca i32, align 4
  %4 = alloca i8*, align 8
  %5 = alloca i32, align 4
  %6 = alloca i32, align 4
  store i32 %0, i32* %2, align 4
  call void @llvm.dbg.declare(metadata i32* %2, metadata !906, metadata !DIExpression()), !dbg !907
  call void @llvm.dbg.declare(metadata i32* %3, metadata !908, metadata !DIExpression()), !dbg !909
  %7 = load i32, i32* %2, align 4, !dbg !910
  %8 = invoke noundef i32 @_Z3bari(i32 noundef %7)
          to label %9 unwind label %10, !dbg !912

9:                                                ; preds = %1
  store i32 %8, i32* %3, align 4, !dbg !913
  br label %24, !dbg !914

10:                                               ; preds = %1
  %11 = landingpad { i8*, i32 }
          catch i8* bitcast (i8** @_ZTIi to i8*), !dbg !915
  %12 = extractvalue { i8*, i32 } %11, 0, !dbg !915
  store i8* %12, i8** %4, align 8, !dbg !915
  %13 = extractvalue { i8*, i32 } %11, 1, !dbg !915
  store i32 %13, i32* %5, align 4, !dbg !915
  br label %14, !dbg !915

14:                                               ; preds = %10
  %15 = load i32, i32* %5, align 4, !dbg !914
  %16 = call i32 @llvm.eh.typeid.for(i8* bitcast (i8** @_ZTIi to i8*)) #3, !dbg !914
  %17 = icmp eq i32 %15, %16, !dbg !914
  br i1 %17, label %18, label %26, !dbg !914

18:                                               ; preds = %14
  call void @llvm.dbg.declare(metadata i32* %6, metadata !916, metadata !DIExpression()), !dbg !917
  %19 = load i8*, i8** %4, align 8, !dbg !914
  %20 = call i8* @__cxa_begin_catch(i8* %19) #3, !dbg !914
  %21 = bitcast i8* %20 to i32*, !dbg !914
  %22 = load i32, i32* %21, align 4, !dbg !914
  store i32 %22, i32* %6, align 4, !dbg !914
  %23 = load i32, i32* %6, align 4, !dbg !918
  store i32 %23, i32* %3, align 4, !dbg !920
  call void @__cxa_end_catch() #3, !dbg !921
  br label %24, !dbg !921

24:                                               ; preds = %18, %9
  %25 = load i32, i32* %3, align 4, !dbg !922
  ret i32 %25, !dbg !923

26:                                               ; preds = %14
  %27 = load i8*, i8** %4, align 8, !dbg !914
  %28 = load i32, i32* %5, align 4, !dbg !914
  %29 = insertvalue { i8*, i32 } undef, i8* %27, 0, !dbg !914
  %30 = insertvalue { i8*, i32 } %29, i32 %28, 1, !dbg !914
  resume { i8*, i32 } %30, !dbg !914
}

; Function Attrs: nounwind readnone
declare i32 @llvm.eh.typeid.for(i8*) #8

declare i8* @__cxa_begin_catch(i8*)

declare void @__cxa_end_catch()

; Function Attrs: mustprogress noinline norecurse optnone uwtable
define dso_local noundef i32 @main(i32 noundef %0, i8** noundef %1) #9 !dbg !924 {
  %3 = alloca i32, align 4
  %4 = alloca i8**, align 8
  store i32 %0, i32* %3, align 4
  call void @llvm.dbg.declare(metadata i32* %3, metadata !927, metadata !DIExpression()), !dbg !928
  store i8** %1, i8*** %4, align 8
  call void @llvm.dbg.declare(metadata i8*** %4, metadata !929, metadata !DIExpression()), !dbg !930
  %5 = load i32, i32* %3, align 4, !dbg !931
  %6 = call noundef i32 @_Z3fooi(i32 noundef %5), !dbg !932
  %7 = call noundef nonnull align 8 dereferenceable(8) %"class.std::basic_ostream"* @_ZNSolsEi(%"class.std::basic_ostream"* noundef nonnull align 8 dereferenceable(8) @_ZSt4cout, i32 noundef %6), !dbg !933
  %8 = call noundef nonnull align 8 dereferenceable(8) %"class.std::basic_ostream"* @_ZNSolsEPFRSoS_E(%"class.std::basic_ostream"* noundef nonnull align 8 dereferenceable(8) %7, %"class.std::basic_ostream"* (%"class.std::basic_ostream"*)* noundef @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_), !dbg !934
  ret i32 0, !dbg !935
}

declare noundef nonnull align 8 dereferenceable(8) %"class.std::basic_ostream"* @_ZNSolsEi(%"class.std::basic_ostream"* noundef nonnull align 8 dereferenceable(8), i32 noundef) #1

declare noundef nonnull align 8 dereferenceable(8) %"class.std::basic_ostream"* @_ZNSolsEPFRSoS_E(%"class.std::basic_ostream"* noundef nonnull align 8 dereferenceable(8), %"class.std::basic_ostream"* (%"class.std::basic_ostream"*)* noundef) #1

declare noundef nonnull align 8 dereferenceable(8) %"class.std::basic_ostream"* @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(%"class.std::basic_ostream"* noundef nonnull align 8 dereferenceable(8)) #1

declare noundef nonnull align 8 dereferenceable(8) %"class.std::basic_ostream"* @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%"class.std::basic_ostream"* noundef nonnull align 8 dereferenceable(8), i8* noundef) #1

; Function Attrs: noinline noreturn nounwind
define linkonce_odr hidden void @__clang_call_terminate(i8* %0) #10 comdat {
  %2 = call i8* @__cxa_begin_catch(i8* %0) #3
  call void @_ZSt9terminatev() #12
  unreachable
}

declare void @_ZSt9terminatev()

; Function Attrs: noinline uwtable
define internal void @_GLOBAL__sub_I_prog.cpp() #0 section ".text.startup" !dbg !936 {
  call void @__cxx_global_var_init(), !dbg !938
  ret void
}

attributes #0 = { noinline uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #1 = { "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #2 = { nounwind "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #3 = { nounwind }
attributes #4 = { mustprogress noinline optnone uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #5 = { nofree nosync nounwind readnone speculatable willreturn }
attributes #6 = { noinline optnone uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #7 = { noinline nounwind optnone uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #8 = { nounwind readnone }
attributes #9 = { mustprogress noinline norecurse optnone uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #10 = { noinline noreturn nounwind }
attributes #11 = { noreturn }
attributes #12 = { noreturn nounwind }

!llvm.dbg.cu = !{!7}
!llvm.module.flags = !{!857, !858, !859, !860, !861, !862, !863}
!llvm.ident = !{!864}

!0 = !DIGlobalVariableExpression(var: !1, expr: !DIExpression())
!1 = distinct !DIGlobalVariable(name: "__ioinit", linkageName: "_ZStL8__ioinit", scope: !2, file: !3, line: 74, type: !4, isLocal: true, isDefinition: true)
!2 = !DINamespace(name: "std", scope: null)
!3 = !DIFile(filename: "/usr/bin/../lib/gcc/x86_64-linux-gnu/11/../../../../include/c++/11/iostream", directory: "")
!4 = !DICompositeType(tag: DW_TAG_class_type, name: "Init", scope: !6, file: !5, line: 626, size: 8, flags: DIFlagFwdDecl | DIFlagNonTrivial, identifier: "_ZTSNSt8ios_base4InitE")
!5 = !DIFile(filename: "/usr/bin/../lib/gcc/x86_64-linux-gnu/11/../../../../include/c++/11/bits/ios_base.h", directory: "")
!6 = !DICompositeType(tag: DW_TAG_class_type, name: "ios_base", scope: !2, file: !5, line: 228, size: 1728, flags: DIFlagFwdDecl | DIFlagNonTrivial)
!7 = distinct !DICompileUnit(language: DW_LANG_C_plus_plus_14, file: !8, producer: "Ubuntu clang version 14.0.6", isOptimized: false, runtimeVersion: 0, emissionKind: FullDebug, retainedTypes: !9, globals: !17, imports: !18, splitDebugInlining: false, nameTableKind: None)
!8 = !DIFile(filename: "prog.cpp", directory: "/home/buuzytrash/kt/course4/compilers-fall-lec4/practice/ex05-cxx", checksumkind: CSK_MD5, checksum: "f5dbf0f547961d637292be980c33d5ce")
!9 = !{!10}
!10 = distinct !DICompositeType(tag: DW_TAG_class_type, name: "ExceptionEx", file: !8, line: 3, size: 8, flags: DIFlagTypePassByReference | DIFlagNonTrivial, elements: !11, identifier: "_ZTS11ExceptionEx")
!11 = !{!12, !16}
!12 = !DISubprogram(name: "ExceptionEx", scope: !10, file: !8, line: 6, type: !13, scopeLine: 6, flags: DIFlagPublic | DIFlagPrototyped, spFlags: 0)
!13 = !DISubroutineType(types: !14)
!14 = !{null, !15}
!15 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !10, size: 64, flags: DIFlagArtificial | DIFlagObjectPointer)
!16 = !DISubprogram(name: "~ExceptionEx", scope: !10, file: !8, line: 7, type: !13, scopeLine: 7, flags: DIFlagPublic | DIFlagPrototyped, spFlags: 0)
!17 = !{!0}
!18 = !{!19, !39, !42, !47, !55, !63, !67, !74, !78, !82, !84, !86, !90, !102, !106, !112, !118, !120, !124, !128, !132, !136, !149, !151, !155, !159, !163, !165, !171, !175, !179, !181, !183, !187, !195, !199, !203, !207, !209, !215, !217, !224, !229, !233, !238, !242, !246, !250, !252, !254, !258, !262, !266, !268, !272, !276, !278, !280, !284, !290, !295, !300, !301, !302, !303, !304, !305, !306, !307, !308, !309, !310, !314, !318, !322, !329, !333, !336, !339, !342, !344, !346, !348, !351, !354, !357, !360, !363, !365, !370, !374, !377, !380, !382, !384, !386, !388, !391, !394, !397, !400, !403, !405, !409, !413, !418, !424, !426, !428, !430, !432, !434, !436, !438, !440, !442, !444, !446, !448, !450, !454, !458, !464, !468, !473, !475, !479, !483, !487, !497, !501, !505, !509, !513, !517, !521, !525, !529, !533, !537, !541, !545, !547, !551, !555, !559, !565, !569, !573, !575, !579, !583, !589, !591, !595, !599, !603, !607, !611, !615, !619, !620, !621, !622, !624, !625, !626, !627, !628, !629, !630, !634, !640, !645, !649, !651, !653, !655, !657, !664, !668, !672, !676, !680, !684, !689, !693, !695, !699, !705, !709, !714, !716, !718, !722, !726, !728, !730, !732, !734, !738, !740, !742, !746, !750, !754, !758, !762, !766, !768, !772, !776, !780, !784, !786, !788, !792, !796, !797, !798, !799, !800, !801, !807, !810, !811, !813, !815, !817, !819, !823, !825, !827, !829, !831, !833, !835, !837, !839, !843, !847, !849, !853}
!19 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !20, file: !38, line: 64)
!20 = !DIDerivedType(tag: DW_TAG_typedef, name: "mbstate_t", file: !21, line: 6, baseType: !22)
!21 = !DIFile(filename: "/usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h", directory: "", checksumkind: CSK_MD5, checksum: "ba8742313715e20e434cf6ccb2db98e3")
!22 = !DIDerivedType(tag: DW_TAG_typedef, name: "__mbstate_t", file: !23, line: 21, baseType: !24)
!23 = !DIFile(filename: "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h", directory: "", checksumkind: CSK_MD5, checksum: "82911a3e689448e3691ded3e0b471a55")
!24 = distinct !DICompositeType(tag: DW_TAG_structure_type, file: !23, line: 13, size: 64, flags: DIFlagTypePassByValue, elements: !25, identifier: "_ZTS11__mbstate_t")
!25 = !{!26, !28}
!26 = !DIDerivedType(tag: DW_TAG_member, name: "__count", scope: !24, file: !23, line: 15, baseType: !27, size: 32)
!27 = !DIBasicType(name: "int", size: 32, encoding: DW_ATE_signed)
!28 = !DIDerivedType(tag: DW_TAG_member, name: "__value", scope: !24, file: !23, line: 20, baseType: !29, size: 32, offset: 32)
!29 = distinct !DICompositeType(tag: DW_TAG_union_type, scope: !24, file: !23, line: 16, size: 32, flags: DIFlagTypePassByValue, elements: !30, identifier: "_ZTSN11__mbstate_tUt_E")
!30 = !{!31, !33}
!31 = !DIDerivedType(tag: DW_TAG_member, name: "__wch", scope: !29, file: !23, line: 18, baseType: !32, size: 32)
!32 = !DIBasicType(name: "unsigned int", size: 32, encoding: DW_ATE_unsigned)
!33 = !DIDerivedType(tag: DW_TAG_member, name: "__wchb", scope: !29, file: !23, line: 19, baseType: !34, size: 32)
!34 = !DICompositeType(tag: DW_TAG_array_type, baseType: !35, size: 32, elements: !36)
!35 = !DIBasicType(name: "char", size: 8, encoding: DW_ATE_signed_char)
!36 = !{!37}
!37 = !DISubrange(count: 4)
!38 = !DIFile(filename: "/usr/bin/../lib/gcc/x86_64-linux-gnu/11/../../../../include/c++/11/cwchar", directory: "")
!39 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !40, file: !38, line: 141)
!40 = !DIDerivedType(tag: DW_TAG_typedef, name: "wint_t", file: !41, line: 20, baseType: !32)
!41 = !DIFile(filename: "/usr/include/x86_64-linux-gnu/bits/types/wint_t.h", directory: "", checksumkind: CSK_MD5, checksum: "aa31b53ef28dc23152ceb41e2763ded3")
!42 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !43, file: !38, line: 143)
!43 = !DISubprogram(name: "btowc", scope: !44, file: !44, line: 285, type: !45, flags: DIFlagPrototyped, spFlags: 0)
!44 = !DIFile(filename: "/usr/include/wchar.h", directory: "", checksumkind: CSK_MD5, checksum: "484b7adbbc849bb51cdbcb2d985b07a0")
!45 = !DISubroutineType(types: !46)
!46 = !{!40, !27}
!47 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !48, file: !38, line: 144)
!48 = !DISubprogram(name: "fgetwc", scope: !44, file: !44, line: 744, type: !49, flags: DIFlagPrototyped, spFlags: 0)
!49 = !DISubroutineType(types: !50)
!50 = !{!40, !51}
!51 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !52, size: 64)
!52 = !DIDerivedType(tag: DW_TAG_typedef, name: "__FILE", file: !53, line: 5, baseType: !54)
!53 = !DIFile(filename: "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h", directory: "", checksumkind: CSK_MD5, checksum: "72a8fe90981f484acae7c6f3dfc5c2b7")
!54 = !DICompositeType(tag: DW_TAG_structure_type, name: "_IO_FILE", file: !53, line: 4, flags: DIFlagFwdDecl | DIFlagNonTrivial, identifier: "_ZTS8_IO_FILE")
!55 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !56, file: !38, line: 145)
!56 = !DISubprogram(name: "fgetws", scope: !44, file: !44, line: 773, type: !57, flags: DIFlagPrototyped, spFlags: 0)
!57 = !DISubroutineType(types: !58)
!58 = !{!59, !61, !27, !62}
!59 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !60, size: 64)
!60 = !DIBasicType(name: "wchar_t", size: 32, encoding: DW_ATE_signed)
!61 = !DIDerivedType(tag: DW_TAG_restrict_type, baseType: !59)
!62 = !DIDerivedType(tag: DW_TAG_restrict_type, baseType: !51)
!63 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !64, file: !38, line: 146)
!64 = !DISubprogram(name: "fputwc", scope: !44, file: !44, line: 758, type: !65, flags: DIFlagPrototyped, spFlags: 0)
!65 = !DISubroutineType(types: !66)
!66 = !{!40, !60, !51}
!67 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !68, file: !38, line: 147)
!68 = !DISubprogram(name: "fputws", scope: !44, file: !44, line: 780, type: !69, flags: DIFlagPrototyped, spFlags: 0)
!69 = !DISubroutineType(types: !70)
!70 = !{!27, !71, !62}
!71 = !DIDerivedType(tag: DW_TAG_restrict_type, baseType: !72)
!72 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !73, size: 64)
!73 = !DIDerivedType(tag: DW_TAG_const_type, baseType: !60)
!74 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !75, file: !38, line: 148)
!75 = !DISubprogram(name: "fwide", scope: !44, file: !44, line: 588, type: !76, flags: DIFlagPrototyped, spFlags: 0)
!76 = !DISubroutineType(types: !77)
!77 = !{!27, !51, !27}
!78 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !79, file: !38, line: 149)
!79 = !DISubprogram(name: "fwprintf", scope: !44, file: !44, line: 595, type: !80, flags: DIFlagPrototyped, spFlags: 0)
!80 = !DISubroutineType(types: !81)
!81 = !{!27, !62, !71, null}
!82 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !83, file: !38, line: 150)
!83 = !DISubprogram(name: "fwscanf", linkageName: "__isoc99_fwscanf", scope: !44, file: !44, line: 657, type: !80, flags: DIFlagPrototyped, spFlags: 0)
!84 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !85, file: !38, line: 151)
!85 = !DISubprogram(name: "getwc", scope: !44, file: !44, line: 745, type: !49, flags: DIFlagPrototyped, spFlags: 0)
!86 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !87, file: !38, line: 152)
!87 = !DISubprogram(name: "getwchar", scope: !44, file: !44, line: 751, type: !88, flags: DIFlagPrototyped, spFlags: 0)
!88 = !DISubroutineType(types: !89)
!89 = !{!40}
!90 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !91, file: !38, line: 153)
!91 = !DISubprogram(name: "mbrlen", scope: !44, file: !44, line: 308, type: !92, flags: DIFlagPrototyped, spFlags: 0)
!92 = !DISubroutineType(types: !93)
!93 = !{!94, !97, !94, !100}
!94 = !DIDerivedType(tag: DW_TAG_typedef, name: "size_t", file: !95, line: 46, baseType: !96)
!95 = !DIFile(filename: "/usr/lib/llvm-14/lib/clang/14.0.6/include/stddef.h", directory: "", checksumkind: CSK_MD5, checksum: "2499dd2361b915724b073282bea3a7bc")
!96 = !DIBasicType(name: "unsigned long", size: 64, encoding: DW_ATE_unsigned)
!97 = !DIDerivedType(tag: DW_TAG_restrict_type, baseType: !98)
!98 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !99, size: 64)
!99 = !DIDerivedType(tag: DW_TAG_const_type, baseType: !35)
!100 = !DIDerivedType(tag: DW_TAG_restrict_type, baseType: !101)
!101 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !20, size: 64)
!102 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !103, file: !38, line: 154)
!103 = !DISubprogram(name: "mbrtowc", scope: !44, file: !44, line: 297, type: !104, flags: DIFlagPrototyped, spFlags: 0)
!104 = !DISubroutineType(types: !105)
!105 = !{!94, !61, !97, !94, !100}
!106 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !107, file: !38, line: 155)
!107 = !DISubprogram(name: "mbsinit", scope: !44, file: !44, line: 293, type: !108, flags: DIFlagPrototyped, spFlags: 0)
!108 = !DISubroutineType(types: !109)
!109 = !{!27, !110}
!110 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !111, size: 64)
!111 = !DIDerivedType(tag: DW_TAG_const_type, baseType: !20)
!112 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !113, file: !38, line: 156)
!113 = !DISubprogram(name: "mbsrtowcs", scope: !44, file: !44, line: 338, type: !114, flags: DIFlagPrototyped, spFlags: 0)
!114 = !DISubroutineType(types: !115)
!115 = !{!94, !61, !116, !94, !100}
!116 = !DIDerivedType(tag: DW_TAG_restrict_type, baseType: !117)
!117 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !98, size: 64)
!118 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !119, file: !38, line: 157)
!119 = !DISubprogram(name: "putwc", scope: !44, file: !44, line: 759, type: !65, flags: DIFlagPrototyped, spFlags: 0)
!120 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !121, file: !38, line: 158)
!121 = !DISubprogram(name: "putwchar", scope: !44, file: !44, line: 765, type: !122, flags: DIFlagPrototyped, spFlags: 0)
!122 = !DISubroutineType(types: !123)
!123 = !{!40, !60}
!124 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !125, file: !38, line: 160)
!125 = !DISubprogram(name: "swprintf", scope: !44, file: !44, line: 605, type: !126, flags: DIFlagPrototyped, spFlags: 0)
!126 = !DISubroutineType(types: !127)
!127 = !{!27, !61, !94, !71, null}
!128 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !129, file: !38, line: 162)
!129 = !DISubprogram(name: "swscanf", linkageName: "__isoc99_swscanf", scope: !44, file: !44, line: 664, type: !130, flags: DIFlagPrototyped, spFlags: 0)
!130 = !DISubroutineType(types: !131)
!131 = !{!27, !71, !71, null}
!132 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !133, file: !38, line: 163)
!133 = !DISubprogram(name: "ungetwc", scope: !44, file: !44, line: 788, type: !134, flags: DIFlagPrototyped, spFlags: 0)
!134 = !DISubroutineType(types: !135)
!135 = !{!40, !40, !51}
!136 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !137, file: !38, line: 164)
!137 = !DISubprogram(name: "vfwprintf", scope: !44, file: !44, line: 613, type: !138, flags: DIFlagPrototyped, spFlags: 0)
!138 = !DISubroutineType(types: !139)
!139 = !{!27, !62, !71, !140}
!140 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !141, size: 64)
!141 = distinct !DICompositeType(tag: DW_TAG_structure_type, name: "__va_list_tag", size: 192, flags: DIFlagTypePassByValue, elements: !142, identifier: "_ZTS13__va_list_tag")
!142 = !{!143, !145, !146, !148}
!143 = !DIDerivedType(tag: DW_TAG_member, name: "gp_offset", scope: !141, file: !144, baseType: !32, size: 32)
!144 = !DIFile(filename: "prog.cpp", directory: "/home/buuzytrash/kt/course4/compilers-fall-lec4/practice/ex05-cxx")
!145 = !DIDerivedType(tag: DW_TAG_member, name: "fp_offset", scope: !141, file: !144, baseType: !32, size: 32, offset: 32)
!146 = !DIDerivedType(tag: DW_TAG_member, name: "overflow_arg_area", scope: !141, file: !144, baseType: !147, size: 64, offset: 64)
!147 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: null, size: 64)
!148 = !DIDerivedType(tag: DW_TAG_member, name: "reg_save_area", scope: !141, file: !144, baseType: !147, size: 64, offset: 128)
!149 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !150, file: !38, line: 166)
!150 = !DISubprogram(name: "vfwscanf", linkageName: "__isoc99_vfwscanf", scope: !44, file: !44, line: 711, type: !138, flags: DIFlagPrototyped, spFlags: 0)
!151 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !152, file: !38, line: 169)
!152 = !DISubprogram(name: "vswprintf", scope: !44, file: !44, line: 626, type: !153, flags: DIFlagPrototyped, spFlags: 0)
!153 = !DISubroutineType(types: !154)
!154 = !{!27, !61, !94, !71, !140}
!155 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !156, file: !38, line: 172)
!156 = !DISubprogram(name: "vswscanf", linkageName: "__isoc99_vswscanf", scope: !44, file: !44, line: 718, type: !157, flags: DIFlagPrototyped, spFlags: 0)
!157 = !DISubroutineType(types: !158)
!158 = !{!27, !71, !71, !140}
!159 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !160, file: !38, line: 174)
!160 = !DISubprogram(name: "vwprintf", scope: !44, file: !44, line: 621, type: !161, flags: DIFlagPrototyped, spFlags: 0)
!161 = !DISubroutineType(types: !162)
!162 = !{!27, !71, !140}
!163 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !164, file: !38, line: 176)
!164 = !DISubprogram(name: "vwscanf", linkageName: "__isoc99_vwscanf", scope: !44, file: !44, line: 715, type: !161, flags: DIFlagPrototyped, spFlags: 0)
!165 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !166, file: !38, line: 178)
!166 = !DISubprogram(name: "wcrtomb", scope: !44, file: !44, line: 302, type: !167, flags: DIFlagPrototyped, spFlags: 0)
!167 = !DISubroutineType(types: !168)
!168 = !{!94, !169, !60, !100}
!169 = !DIDerivedType(tag: DW_TAG_restrict_type, baseType: !170)
!170 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !35, size: 64)
!171 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !172, file: !38, line: 179)
!172 = !DISubprogram(name: "wcscat", scope: !44, file: !44, line: 97, type: !173, flags: DIFlagPrototyped, spFlags: 0)
!173 = !DISubroutineType(types: !174)
!174 = !{!59, !61, !71}
!175 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !176, file: !38, line: 180)
!176 = !DISubprogram(name: "wcscmp", scope: !44, file: !44, line: 106, type: !177, flags: DIFlagPrototyped, spFlags: 0)
!177 = !DISubroutineType(types: !178)
!178 = !{!27, !72, !72}
!179 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !180, file: !38, line: 181)
!180 = !DISubprogram(name: "wcscoll", scope: !44, file: !44, line: 131, type: !177, flags: DIFlagPrototyped, spFlags: 0)
!181 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !182, file: !38, line: 182)
!182 = !DISubprogram(name: "wcscpy", scope: !44, file: !44, line: 87, type: !173, flags: DIFlagPrototyped, spFlags: 0)
!183 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !184, file: !38, line: 183)
!184 = !DISubprogram(name: "wcscspn", scope: !44, file: !44, line: 188, type: !185, flags: DIFlagPrototyped, spFlags: 0)
!185 = !DISubroutineType(types: !186)
!186 = !{!94, !72, !72}
!187 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !188, file: !38, line: 184)
!188 = !DISubprogram(name: "wcsftime", scope: !44, file: !44, line: 852, type: !189, flags: DIFlagPrototyped, spFlags: 0)
!189 = !DISubroutineType(types: !190)
!190 = !{!94, !61, !94, !71, !191}
!191 = !DIDerivedType(tag: DW_TAG_restrict_type, baseType: !192)
!192 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !193, size: 64)
!193 = !DIDerivedType(tag: DW_TAG_const_type, baseType: !194)
!194 = !DICompositeType(tag: DW_TAG_structure_type, name: "tm", file: !44, line: 83, flags: DIFlagFwdDecl | DIFlagNonTrivial, identifier: "_ZTS2tm")
!195 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !196, file: !38, line: 185)
!196 = !DISubprogram(name: "wcslen", scope: !44, file: !44, line: 223, type: !197, flags: DIFlagPrototyped, spFlags: 0)
!197 = !DISubroutineType(types: !198)
!198 = !{!94, !72}
!199 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !200, file: !38, line: 186)
!200 = !DISubprogram(name: "wcsncat", scope: !44, file: !44, line: 101, type: !201, flags: DIFlagPrototyped, spFlags: 0)
!201 = !DISubroutineType(types: !202)
!202 = !{!59, !61, !71, !94}
!203 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !204, file: !38, line: 187)
!204 = !DISubprogram(name: "wcsncmp", scope: !44, file: !44, line: 109, type: !205, flags: DIFlagPrototyped, spFlags: 0)
!205 = !DISubroutineType(types: !206)
!206 = !{!27, !72, !72, !94}
!207 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !208, file: !38, line: 188)
!208 = !DISubprogram(name: "wcsncpy", scope: !44, file: !44, line: 92, type: !201, flags: DIFlagPrototyped, spFlags: 0)
!209 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !210, file: !38, line: 189)
!210 = !DISubprogram(name: "wcsrtombs", scope: !44, file: !44, line: 344, type: !211, flags: DIFlagPrototyped, spFlags: 0)
!211 = !DISubroutineType(types: !212)
!212 = !{!94, !169, !213, !94, !100}
!213 = !DIDerivedType(tag: DW_TAG_restrict_type, baseType: !214)
!214 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !72, size: 64)
!215 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !216, file: !38, line: 190)
!216 = !DISubprogram(name: "wcsspn", scope: !44, file: !44, line: 192, type: !185, flags: DIFlagPrototyped, spFlags: 0)
!217 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !218, file: !38, line: 191)
!218 = !DISubprogram(name: "wcstod", scope: !44, file: !44, line: 378, type: !219, flags: DIFlagPrototyped, spFlags: 0)
!219 = !DISubroutineType(types: !220)
!220 = !{!221, !71, !222}
!221 = !DIBasicType(name: "double", size: 64, encoding: DW_ATE_float)
!222 = !DIDerivedType(tag: DW_TAG_restrict_type, baseType: !223)
!223 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !59, size: 64)
!224 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !225, file: !38, line: 193)
!225 = !DISubprogram(name: "wcstof", scope: !44, file: !44, line: 383, type: !226, flags: DIFlagPrototyped, spFlags: 0)
!226 = !DISubroutineType(types: !227)
!227 = !{!228, !71, !222}
!228 = !DIBasicType(name: "float", size: 32, encoding: DW_ATE_float)
!229 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !230, file: !38, line: 195)
!230 = !DISubprogram(name: "wcstok", scope: !44, file: !44, line: 218, type: !231, flags: DIFlagPrototyped, spFlags: 0)
!231 = !DISubroutineType(types: !232)
!232 = !{!59, !61, !71, !222}
!233 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !234, file: !38, line: 196)
!234 = !DISubprogram(name: "wcstol", scope: !44, file: !44, line: 429, type: !235, flags: DIFlagPrototyped, spFlags: 0)
!235 = !DISubroutineType(types: !236)
!236 = !{!237, !71, !222, !27}
!237 = !DIBasicType(name: "long", size: 64, encoding: DW_ATE_signed)
!238 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !239, file: !38, line: 197)
!239 = !DISubprogram(name: "wcstoul", scope: !44, file: !44, line: 434, type: !240, flags: DIFlagPrototyped, spFlags: 0)
!240 = !DISubroutineType(types: !241)
!241 = !{!96, !71, !222, !27}
!242 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !243, file: !38, line: 198)
!243 = !DISubprogram(name: "wcsxfrm", scope: !44, file: !44, line: 135, type: !244, flags: DIFlagPrototyped, spFlags: 0)
!244 = !DISubroutineType(types: !245)
!245 = !{!94, !61, !71, !94}
!246 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !247, file: !38, line: 199)
!247 = !DISubprogram(name: "wctob", scope: !44, file: !44, line: 289, type: !248, flags: DIFlagPrototyped, spFlags: 0)
!248 = !DISubroutineType(types: !249)
!249 = !{!27, !40}
!250 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !251, file: !38, line: 200)
!251 = !DISubprogram(name: "wmemcmp", scope: !44, file: !44, line: 259, type: !205, flags: DIFlagPrototyped, spFlags: 0)
!252 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !253, file: !38, line: 201)
!253 = !DISubprogram(name: "wmemcpy", scope: !44, file: !44, line: 263, type: !201, flags: DIFlagPrototyped, spFlags: 0)
!254 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !255, file: !38, line: 202)
!255 = !DISubprogram(name: "wmemmove", scope: !44, file: !44, line: 268, type: !256, flags: DIFlagPrototyped, spFlags: 0)
!256 = !DISubroutineType(types: !257)
!257 = !{!59, !59, !72, !94}
!258 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !259, file: !38, line: 203)
!259 = !DISubprogram(name: "wmemset", scope: !44, file: !44, line: 272, type: !260, flags: DIFlagPrototyped, spFlags: 0)
!260 = !DISubroutineType(types: !261)
!261 = !{!59, !59, !60, !94}
!262 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !263, file: !38, line: 204)
!263 = !DISubprogram(name: "wprintf", scope: !44, file: !44, line: 602, type: !264, flags: DIFlagPrototyped, spFlags: 0)
!264 = !DISubroutineType(types: !265)
!265 = !{!27, !71, null}
!266 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !267, file: !38, line: 205)
!267 = !DISubprogram(name: "wscanf", linkageName: "__isoc99_wscanf", scope: !44, file: !44, line: 661, type: !264, flags: DIFlagPrototyped, spFlags: 0)
!268 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !269, file: !38, line: 206)
!269 = !DISubprogram(name: "wcschr", scope: !44, file: !44, line: 165, type: !270, flags: DIFlagPrototyped, spFlags: 0)
!270 = !DISubroutineType(types: !271)
!271 = !{!59, !72, !60}
!272 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !273, file: !38, line: 207)
!273 = !DISubprogram(name: "wcspbrk", scope: !44, file: !44, line: 202, type: !274, flags: DIFlagPrototyped, spFlags: 0)
!274 = !DISubroutineType(types: !275)
!275 = !{!59, !72, !72}
!276 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !277, file: !38, line: 208)
!277 = !DISubprogram(name: "wcsrchr", scope: !44, file: !44, line: 175, type: !270, flags: DIFlagPrototyped, spFlags: 0)
!278 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !279, file: !38, line: 209)
!279 = !DISubprogram(name: "wcsstr", scope: !44, file: !44, line: 213, type: !274, flags: DIFlagPrototyped, spFlags: 0)
!280 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !281, file: !38, line: 210)
!281 = !DISubprogram(name: "wmemchr", scope: !44, file: !44, line: 254, type: !282, flags: DIFlagPrototyped, spFlags: 0)
!282 = !DISubroutineType(types: !283)
!283 = !{!59, !72, !60, !94}
!284 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !285, entity: !286, file: !38, line: 251)
!285 = !DINamespace(name: "__gnu_cxx", scope: null)
!286 = !DISubprogram(name: "wcstold", scope: !44, file: !44, line: 385, type: !287, flags: DIFlagPrototyped, spFlags: 0)
!287 = !DISubroutineType(types: !288)
!288 = !{!289, !71, !222}
!289 = !DIBasicType(name: "long double", size: 128, encoding: DW_ATE_float)
!290 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !285, entity: !291, file: !38, line: 260)
!291 = !DISubprogram(name: "wcstoll", scope: !44, file: !44, line: 442, type: !292, flags: DIFlagPrototyped, spFlags: 0)
!292 = !DISubroutineType(types: !293)
!293 = !{!294, !71, !222, !27}
!294 = !DIBasicType(name: "long long", size: 64, encoding: DW_ATE_signed)
!295 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !285, entity: !296, file: !38, line: 261)
!296 = !DISubprogram(name: "wcstoull", scope: !44, file: !44, line: 449, type: !297, flags: DIFlagPrototyped, spFlags: 0)
!297 = !DISubroutineType(types: !298)
!298 = !{!299, !71, !222, !27}
!299 = !DIBasicType(name: "unsigned long long", size: 64, encoding: DW_ATE_unsigned)
!300 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !286, file: !38, line: 267)
!301 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !291, file: !38, line: 268)
!302 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !296, file: !38, line: 269)
!303 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !225, file: !38, line: 283)
!304 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !150, file: !38, line: 286)
!305 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !156, file: !38, line: 289)
!306 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !164, file: !38, line: 292)
!307 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !286, file: !38, line: 296)
!308 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !291, file: !38, line: 297)
!309 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !296, file: !38, line: 298)
!310 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !311, file: !312, line: 68)
!311 = !DICompositeType(tag: DW_TAG_class_type, name: "exception_ptr", scope: !313, file: !312, line: 90, size: 64, flags: DIFlagFwdDecl | DIFlagNonTrivial, identifier: "_ZTSNSt15__exception_ptr13exception_ptrE")
!312 = !DIFile(filename: "/usr/bin/../lib/gcc/x86_64-linux-gnu/11/../../../../include/c++/11/bits/exception_ptr.h", directory: "", checksumkind: CSK_MD5, checksum: "ed433011c81450fc2dabd9aa8a29a038")
!313 = !DINamespace(name: "__exception_ptr", scope: !2)
!314 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !313, entity: !315, file: !312, line: 84)
!315 = !DISubprogram(name: "rethrow_exception", linkageName: "_ZSt17rethrow_exceptionNSt15__exception_ptr13exception_ptrE", scope: !2, file: !312, line: 80, type: !316, flags: DIFlagPrototyped | DIFlagNoReturn, spFlags: 0)
!316 = !DISubroutineType(types: !317)
!317 = !{null, !311}
!318 = !DIImportedEntity(tag: DW_TAG_imported_module, scope: !319, entity: !320, file: !321, line: 58)
!319 = !DINamespace(name: "__gnu_debug", scope: null)
!320 = !DINamespace(name: "__debug", scope: !2)
!321 = !DIFile(filename: "/usr/bin/../lib/gcc/x86_64-linux-gnu/11/../../../../include/c++/11/debug/debug.h", directory: "", checksumkind: CSK_MD5, checksum: "982c0103e1e5f86b0818efdfc5273c3c")
!322 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !323, file: !328, line: 47)
!323 = !DIDerivedType(tag: DW_TAG_typedef, name: "int8_t", file: !324, line: 24, baseType: !325)
!324 = !DIFile(filename: "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h", directory: "", checksumkind: CSK_MD5, checksum: "55bcbdc3159515ebd91d351a70d505f4")
!325 = !DIDerivedType(tag: DW_TAG_typedef, name: "__int8_t", file: !326, line: 37, baseType: !327)
!326 = !DIFile(filename: "/usr/include/x86_64-linux-gnu/bits/types.h", directory: "", checksumkind: CSK_MD5, checksum: "d108b5f93a74c50510d7d9bc0ab36df9")
!327 = !DIBasicType(name: "signed char", size: 8, encoding: DW_ATE_signed_char)
!328 = !DIFile(filename: "/usr/bin/../lib/gcc/x86_64-linux-gnu/11/../../../../include/c++/11/cstdint", directory: "")
!329 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !330, file: !328, line: 48)
!330 = !DIDerivedType(tag: DW_TAG_typedef, name: "int16_t", file: !324, line: 25, baseType: !331)
!331 = !DIDerivedType(tag: DW_TAG_typedef, name: "__int16_t", file: !326, line: 39, baseType: !332)
!332 = !DIBasicType(name: "short", size: 16, encoding: DW_ATE_signed)
!333 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !334, file: !328, line: 49)
!334 = !DIDerivedType(tag: DW_TAG_typedef, name: "int32_t", file: !324, line: 26, baseType: !335)
!335 = !DIDerivedType(tag: DW_TAG_typedef, name: "__int32_t", file: !326, line: 41, baseType: !27)
!336 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !337, file: !328, line: 50)
!337 = !DIDerivedType(tag: DW_TAG_typedef, name: "int64_t", file: !324, line: 27, baseType: !338)
!338 = !DIDerivedType(tag: DW_TAG_typedef, name: "__int64_t", file: !326, line: 44, baseType: !237)
!339 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !340, file: !328, line: 52)
!340 = !DIDerivedType(tag: DW_TAG_typedef, name: "int_fast8_t", file: !341, line: 58, baseType: !327)
!341 = !DIFile(filename: "/usr/include/stdint.h", directory: "", checksumkind: CSK_MD5, checksum: "a48e64edacc5b19f56c99745232c963c")
!342 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !343, file: !328, line: 53)
!343 = !DIDerivedType(tag: DW_TAG_typedef, name: "int_fast16_t", file: !341, line: 60, baseType: !237)
!344 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !345, file: !328, line: 54)
!345 = !DIDerivedType(tag: DW_TAG_typedef, name: "int_fast32_t", file: !341, line: 61, baseType: !237)
!346 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !347, file: !328, line: 55)
!347 = !DIDerivedType(tag: DW_TAG_typedef, name: "int_fast64_t", file: !341, line: 62, baseType: !237)
!348 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !349, file: !328, line: 57)
!349 = !DIDerivedType(tag: DW_TAG_typedef, name: "int_least8_t", file: !341, line: 43, baseType: !350)
!350 = !DIDerivedType(tag: DW_TAG_typedef, name: "__int_least8_t", file: !326, line: 52, baseType: !325)
!351 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !352, file: !328, line: 58)
!352 = !DIDerivedType(tag: DW_TAG_typedef, name: "int_least16_t", file: !341, line: 44, baseType: !353)
!353 = !DIDerivedType(tag: DW_TAG_typedef, name: "__int_least16_t", file: !326, line: 54, baseType: !331)
!354 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !355, file: !328, line: 59)
!355 = !DIDerivedType(tag: DW_TAG_typedef, name: "int_least32_t", file: !341, line: 45, baseType: !356)
!356 = !DIDerivedType(tag: DW_TAG_typedef, name: "__int_least32_t", file: !326, line: 56, baseType: !335)
!357 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !358, file: !328, line: 60)
!358 = !DIDerivedType(tag: DW_TAG_typedef, name: "int_least64_t", file: !341, line: 46, baseType: !359)
!359 = !DIDerivedType(tag: DW_TAG_typedef, name: "__int_least64_t", file: !326, line: 58, baseType: !338)
!360 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !361, file: !328, line: 62)
!361 = !DIDerivedType(tag: DW_TAG_typedef, name: "intmax_t", file: !341, line: 101, baseType: !362)
!362 = !DIDerivedType(tag: DW_TAG_typedef, name: "__intmax_t", file: !326, line: 72, baseType: !237)
!363 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !364, file: !328, line: 63)
!364 = !DIDerivedType(tag: DW_TAG_typedef, name: "intptr_t", file: !341, line: 87, baseType: !237)
!365 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !366, file: !328, line: 65)
!366 = !DIDerivedType(tag: DW_TAG_typedef, name: "uint8_t", file: !367, line: 24, baseType: !368)
!367 = !DIFile(filename: "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h", directory: "", checksumkind: CSK_MD5, checksum: "2bf2ae53c58c01b1a1b9383b5195125c")
!368 = !DIDerivedType(tag: DW_TAG_typedef, name: "__uint8_t", file: !326, line: 38, baseType: !369)
!369 = !DIBasicType(name: "unsigned char", size: 8, encoding: DW_ATE_unsigned_char)
!370 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !371, file: !328, line: 66)
!371 = !DIDerivedType(tag: DW_TAG_typedef, name: "uint16_t", file: !367, line: 25, baseType: !372)
!372 = !DIDerivedType(tag: DW_TAG_typedef, name: "__uint16_t", file: !326, line: 40, baseType: !373)
!373 = !DIBasicType(name: "unsigned short", size: 16, encoding: DW_ATE_unsigned)
!374 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !375, file: !328, line: 67)
!375 = !DIDerivedType(tag: DW_TAG_typedef, name: "uint32_t", file: !367, line: 26, baseType: !376)
!376 = !DIDerivedType(tag: DW_TAG_typedef, name: "__uint32_t", file: !326, line: 42, baseType: !32)
!377 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !378, file: !328, line: 68)
!378 = !DIDerivedType(tag: DW_TAG_typedef, name: "uint64_t", file: !367, line: 27, baseType: !379)
!379 = !DIDerivedType(tag: DW_TAG_typedef, name: "__uint64_t", file: !326, line: 45, baseType: !96)
!380 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !381, file: !328, line: 70)
!381 = !DIDerivedType(tag: DW_TAG_typedef, name: "uint_fast8_t", file: !341, line: 71, baseType: !369)
!382 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !383, file: !328, line: 71)
!383 = !DIDerivedType(tag: DW_TAG_typedef, name: "uint_fast16_t", file: !341, line: 73, baseType: !96)
!384 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !385, file: !328, line: 72)
!385 = !DIDerivedType(tag: DW_TAG_typedef, name: "uint_fast32_t", file: !341, line: 74, baseType: !96)
!386 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !387, file: !328, line: 73)
!387 = !DIDerivedType(tag: DW_TAG_typedef, name: "uint_fast64_t", file: !341, line: 75, baseType: !96)
!388 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !389, file: !328, line: 75)
!389 = !DIDerivedType(tag: DW_TAG_typedef, name: "uint_least8_t", file: !341, line: 49, baseType: !390)
!390 = !DIDerivedType(tag: DW_TAG_typedef, name: "__uint_least8_t", file: !326, line: 53, baseType: !368)
!391 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !392, file: !328, line: 76)
!392 = !DIDerivedType(tag: DW_TAG_typedef, name: "uint_least16_t", file: !341, line: 50, baseType: !393)
!393 = !DIDerivedType(tag: DW_TAG_typedef, name: "__uint_least16_t", file: !326, line: 55, baseType: !372)
!394 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !395, file: !328, line: 77)
!395 = !DIDerivedType(tag: DW_TAG_typedef, name: "uint_least32_t", file: !341, line: 51, baseType: !396)
!396 = !DIDerivedType(tag: DW_TAG_typedef, name: "__uint_least32_t", file: !326, line: 57, baseType: !376)
!397 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !398, file: !328, line: 78)
!398 = !DIDerivedType(tag: DW_TAG_typedef, name: "uint_least64_t", file: !341, line: 52, baseType: !399)
!399 = !DIDerivedType(tag: DW_TAG_typedef, name: "__uint_least64_t", file: !326, line: 59, baseType: !379)
!400 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !401, file: !328, line: 80)
!401 = !DIDerivedType(tag: DW_TAG_typedef, name: "uintmax_t", file: !341, line: 102, baseType: !402)
!402 = !DIDerivedType(tag: DW_TAG_typedef, name: "__uintmax_t", file: !326, line: 73, baseType: !96)
!403 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !404, file: !328, line: 81)
!404 = !DIDerivedType(tag: DW_TAG_typedef, name: "uintptr_t", file: !341, line: 90, baseType: !96)
!405 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !406, file: !408, line: 53)
!406 = !DICompositeType(tag: DW_TAG_structure_type, name: "lconv", file: !407, line: 51, size: 768, flags: DIFlagFwdDecl, identifier: "_ZTS5lconv")
!407 = !DIFile(filename: "/usr/include/locale.h", directory: "", checksumkind: CSK_MD5, checksum: "a1d177e0f311dc60a74cb347049d75bc")
!408 = !DIFile(filename: "/usr/bin/../lib/gcc/x86_64-linux-gnu/11/../../../../include/c++/11/clocale", directory: "")
!409 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !410, file: !408, line: 54)
!410 = !DISubprogram(name: "setlocale", scope: !407, file: !407, line: 122, type: !411, flags: DIFlagPrototyped, spFlags: 0)
!411 = !DISubroutineType(types: !412)
!412 = !{!170, !27, !98}
!413 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !414, file: !408, line: 55)
!414 = !DISubprogram(name: "localeconv", scope: !407, file: !407, line: 125, type: !415, flags: DIFlagPrototyped, spFlags: 0)
!415 = !DISubroutineType(types: !416)
!416 = !{!417}
!417 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !406, size: 64)
!418 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !419, file: !423, line: 64)
!419 = !DISubprogram(name: "isalnum", scope: !420, file: !420, line: 108, type: !421, flags: DIFlagPrototyped, spFlags: 0)
!420 = !DIFile(filename: "/usr/include/ctype.h", directory: "", checksumkind: CSK_MD5, checksum: "3ab3dd7fdf2578005732722ee2393e59")
!421 = !DISubroutineType(types: !422)
!422 = !{!27, !27}
!423 = !DIFile(filename: "/usr/bin/../lib/gcc/x86_64-linux-gnu/11/../../../../include/c++/11/cctype", directory: "")
!424 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !425, file: !423, line: 65)
!425 = !DISubprogram(name: "isalpha", scope: !420, file: !420, line: 109, type: !421, flags: DIFlagPrototyped, spFlags: 0)
!426 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !427, file: !423, line: 66)
!427 = !DISubprogram(name: "iscntrl", scope: !420, file: !420, line: 110, type: !421, flags: DIFlagPrototyped, spFlags: 0)
!428 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !429, file: !423, line: 67)
!429 = !DISubprogram(name: "isdigit", scope: !420, file: !420, line: 111, type: !421, flags: DIFlagPrototyped, spFlags: 0)
!430 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !431, file: !423, line: 68)
!431 = !DISubprogram(name: "isgraph", scope: !420, file: !420, line: 113, type: !421, flags: DIFlagPrototyped, spFlags: 0)
!432 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !433, file: !423, line: 69)
!433 = !DISubprogram(name: "islower", scope: !420, file: !420, line: 112, type: !421, flags: DIFlagPrototyped, spFlags: 0)
!434 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !435, file: !423, line: 70)
!435 = !DISubprogram(name: "isprint", scope: !420, file: !420, line: 114, type: !421, flags: DIFlagPrototyped, spFlags: 0)
!436 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !437, file: !423, line: 71)
!437 = !DISubprogram(name: "ispunct", scope: !420, file: !420, line: 115, type: !421, flags: DIFlagPrototyped, spFlags: 0)
!438 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !439, file: !423, line: 72)
!439 = !DISubprogram(name: "isspace", scope: !420, file: !420, line: 116, type: !421, flags: DIFlagPrototyped, spFlags: 0)
!440 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !441, file: !423, line: 73)
!441 = !DISubprogram(name: "isupper", scope: !420, file: !420, line: 117, type: !421, flags: DIFlagPrototyped, spFlags: 0)
!442 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !443, file: !423, line: 74)
!443 = !DISubprogram(name: "isxdigit", scope: !420, file: !420, line: 118, type: !421, flags: DIFlagPrototyped, spFlags: 0)
!444 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !445, file: !423, line: 75)
!445 = !DISubprogram(name: "tolower", scope: !420, file: !420, line: 122, type: !421, flags: DIFlagPrototyped, spFlags: 0)
!446 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !447, file: !423, line: 76)
!447 = !DISubprogram(name: "toupper", scope: !420, file: !420, line: 125, type: !421, flags: DIFlagPrototyped, spFlags: 0)
!448 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !449, file: !423, line: 87)
!449 = !DISubprogram(name: "isblank", scope: !420, file: !420, line: 130, type: !421, flags: DIFlagPrototyped, spFlags: 0)
!450 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !451, file: !453, line: 52)
!451 = !DISubprogram(name: "abs", scope: !452, file: !452, line: 848, type: !421, flags: DIFlagPrototyped, spFlags: 0)
!452 = !DIFile(filename: "/usr/include/stdlib.h", directory: "", checksumkind: CSK_MD5, checksum: "02258fad21adf111bb9df9825e61954a")
!453 = !DIFile(filename: "/usr/bin/../lib/gcc/x86_64-linux-gnu/11/../../../../include/c++/11/bits/std_abs.h", directory: "")
!454 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !455, file: !457, line: 127)
!455 = !DIDerivedType(tag: DW_TAG_typedef, name: "div_t", file: !452, line: 63, baseType: !456)
!456 = !DICompositeType(tag: DW_TAG_structure_type, file: !452, line: 59, size: 64, flags: DIFlagFwdDecl, identifier: "_ZTS5div_t")
!457 = !DIFile(filename: "/usr/bin/../lib/gcc/x86_64-linux-gnu/11/../../../../include/c++/11/cstdlib", directory: "")
!458 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !459, file: !457, line: 128)
!459 = !DIDerivedType(tag: DW_TAG_typedef, name: "ldiv_t", file: !452, line: 71, baseType: !460)
!460 = distinct !DICompositeType(tag: DW_TAG_structure_type, file: !452, line: 67, size: 128, flags: DIFlagTypePassByValue, elements: !461, identifier: "_ZTS6ldiv_t")
!461 = !{!462, !463}
!462 = !DIDerivedType(tag: DW_TAG_member, name: "quot", scope: !460, file: !452, line: 69, baseType: !237, size: 64)
!463 = !DIDerivedType(tag: DW_TAG_member, name: "rem", scope: !460, file: !452, line: 70, baseType: !237, size: 64, offset: 64)
!464 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !465, file: !457, line: 130)
!465 = !DISubprogram(name: "abort", scope: !452, file: !452, line: 598, type: !466, flags: DIFlagPrototyped | DIFlagNoReturn, spFlags: 0)
!466 = !DISubroutineType(types: !467)
!467 = !{null}
!468 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !469, file: !457, line: 134)
!469 = !DISubprogram(name: "atexit", scope: !452, file: !452, line: 602, type: !470, flags: DIFlagPrototyped, spFlags: 0)
!470 = !DISubroutineType(types: !471)
!471 = !{!27, !472}
!472 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !466, size: 64)
!473 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !474, file: !457, line: 137)
!474 = !DISubprogram(name: "at_quick_exit", scope: !452, file: !452, line: 607, type: !470, flags: DIFlagPrototyped, spFlags: 0)
!475 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !476, file: !457, line: 140)
!476 = !DISubprogram(name: "atof", scope: !452, file: !452, line: 102, type: !477, flags: DIFlagPrototyped, spFlags: 0)
!477 = !DISubroutineType(types: !478)
!478 = !{!221, !98}
!479 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !480, file: !457, line: 141)
!480 = !DISubprogram(name: "atoi", scope: !452, file: !452, line: 105, type: !481, flags: DIFlagPrototyped, spFlags: 0)
!481 = !DISubroutineType(types: !482)
!482 = !{!27, !98}
!483 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !484, file: !457, line: 142)
!484 = !DISubprogram(name: "atol", scope: !452, file: !452, line: 108, type: !485, flags: DIFlagPrototyped, spFlags: 0)
!485 = !DISubroutineType(types: !486)
!486 = !{!237, !98}
!487 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !488, file: !457, line: 143)
!488 = !DISubprogram(name: "bsearch", scope: !452, file: !452, line: 828, type: !489, flags: DIFlagPrototyped, spFlags: 0)
!489 = !DISubroutineType(types: !490)
!490 = !{!147, !491, !491, !94, !94, !493}
!491 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !492, size: 64)
!492 = !DIDerivedType(tag: DW_TAG_const_type, baseType: null)
!493 = !DIDerivedType(tag: DW_TAG_typedef, name: "__compar_fn_t", file: !452, line: 816, baseType: !494)
!494 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !495, size: 64)
!495 = !DISubroutineType(types: !496)
!496 = !{!27, !491, !491}
!497 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !498, file: !457, line: 144)
!498 = !DISubprogram(name: "calloc", scope: !452, file: !452, line: 543, type: !499, flags: DIFlagPrototyped, spFlags: 0)
!499 = !DISubroutineType(types: !500)
!500 = !{!147, !94, !94}
!501 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !502, file: !457, line: 145)
!502 = !DISubprogram(name: "div", scope: !452, file: !452, line: 860, type: !503, flags: DIFlagPrototyped, spFlags: 0)
!503 = !DISubroutineType(types: !504)
!504 = !{!455, !27, !27}
!505 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !506, file: !457, line: 146)
!506 = !DISubprogram(name: "exit", scope: !452, file: !452, line: 624, type: !507, flags: DIFlagPrototyped | DIFlagNoReturn, spFlags: 0)
!507 = !DISubroutineType(types: !508)
!508 = !{null, !27}
!509 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !510, file: !457, line: 147)
!510 = !DISubprogram(name: "free", scope: !452, file: !452, line: 555, type: !511, flags: DIFlagPrototyped, spFlags: 0)
!511 = !DISubroutineType(types: !512)
!512 = !{null, !147}
!513 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !514, file: !457, line: 148)
!514 = !DISubprogram(name: "getenv", scope: !452, file: !452, line: 641, type: !515, flags: DIFlagPrototyped, spFlags: 0)
!515 = !DISubroutineType(types: !516)
!516 = !{!170, !98}
!517 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !518, file: !457, line: 149)
!518 = !DISubprogram(name: "labs", scope: !452, file: !452, line: 849, type: !519, flags: DIFlagPrototyped, spFlags: 0)
!519 = !DISubroutineType(types: !520)
!520 = !{!237, !237}
!521 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !522, file: !457, line: 150)
!522 = !DISubprogram(name: "ldiv", scope: !452, file: !452, line: 862, type: !523, flags: DIFlagPrototyped, spFlags: 0)
!523 = !DISubroutineType(types: !524)
!524 = !{!459, !237, !237}
!525 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !526, file: !457, line: 151)
!526 = !DISubprogram(name: "malloc", scope: !452, file: !452, line: 540, type: !527, flags: DIFlagPrototyped, spFlags: 0)
!527 = !DISubroutineType(types: !528)
!528 = !{!147, !94}
!529 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !530, file: !457, line: 153)
!530 = !DISubprogram(name: "mblen", scope: !452, file: !452, line: 930, type: !531, flags: DIFlagPrototyped, spFlags: 0)
!531 = !DISubroutineType(types: !532)
!532 = !{!27, !98, !94}
!533 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !534, file: !457, line: 154)
!534 = !DISubprogram(name: "mbstowcs", scope: !452, file: !452, line: 941, type: !535, flags: DIFlagPrototyped, spFlags: 0)
!535 = !DISubroutineType(types: !536)
!536 = !{!94, !61, !97, !94}
!537 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !538, file: !457, line: 155)
!538 = !DISubprogram(name: "mbtowc", scope: !452, file: !452, line: 933, type: !539, flags: DIFlagPrototyped, spFlags: 0)
!539 = !DISubroutineType(types: !540)
!540 = !{!27, !61, !97, !94}
!541 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !542, file: !457, line: 157)
!542 = !DISubprogram(name: "qsort", scope: !452, file: !452, line: 838, type: !543, flags: DIFlagPrototyped, spFlags: 0)
!543 = !DISubroutineType(types: !544)
!544 = !{null, !147, !94, !94, !493}
!545 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !546, file: !457, line: 160)
!546 = !DISubprogram(name: "quick_exit", scope: !452, file: !452, line: 630, type: !507, flags: DIFlagPrototyped | DIFlagNoReturn, spFlags: 0)
!547 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !548, file: !457, line: 163)
!548 = !DISubprogram(name: "rand", scope: !452, file: !452, line: 454, type: !549, flags: DIFlagPrototyped, spFlags: 0)
!549 = !DISubroutineType(types: !550)
!550 = !{!27}
!551 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !552, file: !457, line: 164)
!552 = !DISubprogram(name: "realloc", scope: !452, file: !452, line: 551, type: !553, flags: DIFlagPrototyped, spFlags: 0)
!553 = !DISubroutineType(types: !554)
!554 = !{!147, !147, !94}
!555 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !556, file: !457, line: 165)
!556 = !DISubprogram(name: "srand", scope: !452, file: !452, line: 456, type: !557, flags: DIFlagPrototyped, spFlags: 0)
!557 = !DISubroutineType(types: !558)
!558 = !{null, !32}
!559 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !560, file: !457, line: 166)
!560 = !DISubprogram(name: "strtod", scope: !452, file: !452, line: 118, type: !561, flags: DIFlagPrototyped, spFlags: 0)
!561 = !DISubroutineType(types: !562)
!562 = !{!221, !97, !563}
!563 = !DIDerivedType(tag: DW_TAG_restrict_type, baseType: !564)
!564 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !170, size: 64)
!565 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !566, file: !457, line: 167)
!566 = !DISubprogram(name: "strtol", scope: !452, file: !452, line: 177, type: !567, flags: DIFlagPrototyped, spFlags: 0)
!567 = !DISubroutineType(types: !568)
!568 = !{!237, !97, !563, !27}
!569 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !570, file: !457, line: 168)
!570 = !DISubprogram(name: "strtoul", scope: !452, file: !452, line: 181, type: !571, flags: DIFlagPrototyped, spFlags: 0)
!571 = !DISubroutineType(types: !572)
!572 = !{!96, !97, !563, !27}
!573 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !574, file: !457, line: 169)
!574 = !DISubprogram(name: "system", scope: !452, file: !452, line: 791, type: !481, flags: DIFlagPrototyped, spFlags: 0)
!575 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !576, file: !457, line: 171)
!576 = !DISubprogram(name: "wcstombs", scope: !452, file: !452, line: 945, type: !577, flags: DIFlagPrototyped, spFlags: 0)
!577 = !DISubroutineType(types: !578)
!578 = !{!94, !169, !71, !94}
!579 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !580, file: !457, line: 172)
!580 = !DISubprogram(name: "wctomb", scope: !452, file: !452, line: 937, type: !581, flags: DIFlagPrototyped, spFlags: 0)
!581 = !DISubroutineType(types: !582)
!582 = !{!27, !170, !60}
!583 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !285, entity: !584, file: !457, line: 200)
!584 = !DIDerivedType(tag: DW_TAG_typedef, name: "lldiv_t", file: !452, line: 81, baseType: !585)
!585 = distinct !DICompositeType(tag: DW_TAG_structure_type, file: !452, line: 77, size: 128, flags: DIFlagTypePassByValue, elements: !586, identifier: "_ZTS7lldiv_t")
!586 = !{!587, !588}
!587 = !DIDerivedType(tag: DW_TAG_member, name: "quot", scope: !585, file: !452, line: 79, baseType: !294, size: 64)
!588 = !DIDerivedType(tag: DW_TAG_member, name: "rem", scope: !585, file: !452, line: 80, baseType: !294, size: 64, offset: 64)
!589 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !285, entity: !590, file: !457, line: 206)
!590 = !DISubprogram(name: "_Exit", scope: !452, file: !452, line: 636, type: !507, flags: DIFlagPrototyped | DIFlagNoReturn, spFlags: 0)
!591 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !285, entity: !592, file: !457, line: 210)
!592 = !DISubprogram(name: "llabs", scope: !452, file: !452, line: 852, type: !593, flags: DIFlagPrototyped, spFlags: 0)
!593 = !DISubroutineType(types: !594)
!594 = !{!294, !294}
!595 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !285, entity: !596, file: !457, line: 216)
!596 = !DISubprogram(name: "lldiv", scope: !452, file: !452, line: 866, type: !597, flags: DIFlagPrototyped, spFlags: 0)
!597 = !DISubroutineType(types: !598)
!598 = !{!584, !294, !294}
!599 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !285, entity: !600, file: !457, line: 227)
!600 = !DISubprogram(name: "atoll", scope: !452, file: !452, line: 113, type: !601, flags: DIFlagPrototyped, spFlags: 0)
!601 = !DISubroutineType(types: !602)
!602 = !{!294, !98}
!603 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !285, entity: !604, file: !457, line: 228)
!604 = !DISubprogram(name: "strtoll", scope: !452, file: !452, line: 201, type: !605, flags: DIFlagPrototyped, spFlags: 0)
!605 = !DISubroutineType(types: !606)
!606 = !{!294, !97, !563, !27}
!607 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !285, entity: !608, file: !457, line: 229)
!608 = !DISubprogram(name: "strtoull", scope: !452, file: !452, line: 206, type: !609, flags: DIFlagPrototyped, spFlags: 0)
!609 = !DISubroutineType(types: !610)
!610 = !{!299, !97, !563, !27}
!611 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !285, entity: !612, file: !457, line: 231)
!612 = !DISubprogram(name: "strtof", scope: !452, file: !452, line: 124, type: !613, flags: DIFlagPrototyped, spFlags: 0)
!613 = !DISubroutineType(types: !614)
!614 = !{!228, !97, !563}
!615 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !285, entity: !616, file: !457, line: 232)
!616 = !DISubprogram(name: "strtold", scope: !452, file: !452, line: 127, type: !617, flags: DIFlagPrototyped, spFlags: 0)
!617 = !DISubroutineType(types: !618)
!618 = !{!289, !97, !563}
!619 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !584, file: !457, line: 240)
!620 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !590, file: !457, line: 242)
!621 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !592, file: !457, line: 244)
!622 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !623, file: !457, line: 245)
!623 = !DISubprogram(name: "div", linkageName: "_ZN9__gnu_cxx3divExx", scope: !285, file: !457, line: 213, type: !597, flags: DIFlagPrototyped, spFlags: 0)
!624 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !596, file: !457, line: 246)
!625 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !600, file: !457, line: 248)
!626 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !612, file: !457, line: 249)
!627 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !604, file: !457, line: 250)
!628 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !608, file: !457, line: 251)
!629 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !616, file: !457, line: 252)
!630 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !631, file: !633, line: 98)
!631 = !DIDerivedType(tag: DW_TAG_typedef, name: "FILE", file: !632, line: 7, baseType: !54)
!632 = !DIFile(filename: "/usr/include/x86_64-linux-gnu/bits/types/FILE.h", directory: "", checksumkind: CSK_MD5, checksum: "571f9fb6223c42439075fdde11a0de5d")
!633 = !DIFile(filename: "/usr/bin/../lib/gcc/x86_64-linux-gnu/11/../../../../include/c++/11/cstdio", directory: "")
!634 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !635, file: !633, line: 99)
!635 = !DIDerivedType(tag: DW_TAG_typedef, name: "fpos_t", file: !636, line: 84, baseType: !637)
!636 = !DIFile(filename: "/usr/include/stdio.h", directory: "", checksumkind: CSK_MD5, checksum: "f31eefcc3f15835fc5a4023a625cf609")
!637 = !DIDerivedType(tag: DW_TAG_typedef, name: "__fpos_t", file: !638, line: 14, baseType: !639)
!638 = !DIFile(filename: "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h", directory: "", checksumkind: CSK_MD5, checksum: "32de8bdaf3551a6c0a9394f9af4389ce")
!639 = !DICompositeType(tag: DW_TAG_structure_type, name: "_G_fpos_t", file: !638, line: 10, size: 128, flags: DIFlagFwdDecl, identifier: "_ZTS9_G_fpos_t")
!640 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !641, file: !633, line: 101)
!641 = !DISubprogram(name: "clearerr", scope: !636, file: !636, line: 786, type: !642, flags: DIFlagPrototyped, spFlags: 0)
!642 = !DISubroutineType(types: !643)
!643 = !{null, !644}
!644 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !631, size: 64)
!645 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !646, file: !633, line: 102)
!646 = !DISubprogram(name: "fclose", scope: !636, file: !636, line: 178, type: !647, flags: DIFlagPrototyped, spFlags: 0)
!647 = !DISubroutineType(types: !648)
!648 = !{!27, !644}
!649 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !650, file: !633, line: 103)
!650 = !DISubprogram(name: "feof", scope: !636, file: !636, line: 788, type: !647, flags: DIFlagPrototyped, spFlags: 0)
!651 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !652, file: !633, line: 104)
!652 = !DISubprogram(name: "ferror", scope: !636, file: !636, line: 790, type: !647, flags: DIFlagPrototyped, spFlags: 0)
!653 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !654, file: !633, line: 105)
!654 = !DISubprogram(name: "fflush", scope: !636, file: !636, line: 230, type: !647, flags: DIFlagPrototyped, spFlags: 0)
!655 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !656, file: !633, line: 106)
!656 = !DISubprogram(name: "fgetc", scope: !636, file: !636, line: 513, type: !647, flags: DIFlagPrototyped, spFlags: 0)
!657 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !658, file: !633, line: 107)
!658 = !DISubprogram(name: "fgetpos", scope: !636, file: !636, line: 760, type: !659, flags: DIFlagPrototyped, spFlags: 0)
!659 = !DISubroutineType(types: !660)
!660 = !{!27, !661, !662}
!661 = !DIDerivedType(tag: DW_TAG_restrict_type, baseType: !644)
!662 = !DIDerivedType(tag: DW_TAG_restrict_type, baseType: !663)
!663 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !635, size: 64)
!664 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !665, file: !633, line: 108)
!665 = !DISubprogram(name: "fgets", scope: !636, file: !636, line: 592, type: !666, flags: DIFlagPrototyped, spFlags: 0)
!666 = !DISubroutineType(types: !667)
!667 = !{!170, !169, !27, !661}
!668 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !669, file: !633, line: 109)
!669 = !DISubprogram(name: "fopen", scope: !636, file: !636, line: 258, type: !670, flags: DIFlagPrototyped, spFlags: 0)
!670 = !DISubroutineType(types: !671)
!671 = !{!644, !97, !97}
!672 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !673, file: !633, line: 110)
!673 = !DISubprogram(name: "fprintf", scope: !636, file: !636, line: 350, type: !674, flags: DIFlagPrototyped, spFlags: 0)
!674 = !DISubroutineType(types: !675)
!675 = !{!27, !661, !97, null}
!676 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !677, file: !633, line: 111)
!677 = !DISubprogram(name: "fputc", scope: !636, file: !636, line: 549, type: !678, flags: DIFlagPrototyped, spFlags: 0)
!678 = !DISubroutineType(types: !679)
!679 = !{!27, !27, !644}
!680 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !681, file: !633, line: 112)
!681 = !DISubprogram(name: "fputs", scope: !636, file: !636, line: 655, type: !682, flags: DIFlagPrototyped, spFlags: 0)
!682 = !DISubroutineType(types: !683)
!683 = !{!27, !97, !661}
!684 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !685, file: !633, line: 113)
!685 = !DISubprogram(name: "fread", scope: !636, file: !636, line: 675, type: !686, flags: DIFlagPrototyped, spFlags: 0)
!686 = !DISubroutineType(types: !687)
!687 = !{!94, !688, !94, !94, !661}
!688 = !DIDerivedType(tag: DW_TAG_restrict_type, baseType: !147)
!689 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !690, file: !633, line: 114)
!690 = !DISubprogram(name: "freopen", scope: !636, file: !636, line: 265, type: !691, flags: DIFlagPrototyped, spFlags: 0)
!691 = !DISubroutineType(types: !692)
!692 = !{!644, !97, !97, !661}
!693 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !694, file: !633, line: 115)
!694 = !DISubprogram(name: "fscanf", linkageName: "__isoc99_fscanf", scope: !636, file: !636, line: 434, type: !674, flags: DIFlagPrototyped, spFlags: 0)
!695 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !696, file: !633, line: 116)
!696 = !DISubprogram(name: "fseek", scope: !636, file: !636, line: 713, type: !697, flags: DIFlagPrototyped, spFlags: 0)
!697 = !DISubroutineType(types: !698)
!698 = !{!27, !644, !237, !27}
!699 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !700, file: !633, line: 117)
!700 = !DISubprogram(name: "fsetpos", scope: !636, file: !636, line: 765, type: !701, flags: DIFlagPrototyped, spFlags: 0)
!701 = !DISubroutineType(types: !702)
!702 = !{!27, !644, !703}
!703 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !704, size: 64)
!704 = !DIDerivedType(tag: DW_TAG_const_type, baseType: !635)
!705 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !706, file: !633, line: 118)
!706 = !DISubprogram(name: "ftell", scope: !636, file: !636, line: 718, type: !707, flags: DIFlagPrototyped, spFlags: 0)
!707 = !DISubroutineType(types: !708)
!708 = !{!237, !644}
!709 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !710, file: !633, line: 119)
!710 = !DISubprogram(name: "fwrite", scope: !636, file: !636, line: 681, type: !711, flags: DIFlagPrototyped, spFlags: 0)
!711 = !DISubroutineType(types: !712)
!712 = !{!94, !713, !94, !94, !661}
!713 = !DIDerivedType(tag: DW_TAG_restrict_type, baseType: !491)
!714 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !715, file: !633, line: 120)
!715 = !DISubprogram(name: "getc", scope: !636, file: !636, line: 514, type: !647, flags: DIFlagPrototyped, spFlags: 0)
!716 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !717, file: !633, line: 121)
!717 = !DISubprogram(name: "getchar", scope: !636, file: !636, line: 520, type: !549, flags: DIFlagPrototyped, spFlags: 0)
!718 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !719, file: !633, line: 126)
!719 = !DISubprogram(name: "perror", scope: !636, file: !636, line: 804, type: !720, flags: DIFlagPrototyped, spFlags: 0)
!720 = !DISubroutineType(types: !721)
!721 = !{null, !98}
!722 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !723, file: !633, line: 127)
!723 = !DISubprogram(name: "printf", scope: !636, file: !636, line: 356, type: !724, flags: DIFlagPrototyped, spFlags: 0)
!724 = !DISubroutineType(types: !725)
!725 = !{!27, !97, null}
!726 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !727, file: !633, line: 128)
!727 = !DISubprogram(name: "putc", scope: !636, file: !636, line: 550, type: !678, flags: DIFlagPrototyped, spFlags: 0)
!728 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !729, file: !633, line: 129)
!729 = !DISubprogram(name: "putchar", scope: !636, file: !636, line: 556, type: !421, flags: DIFlagPrototyped, spFlags: 0)
!730 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !731, file: !633, line: 130)
!731 = !DISubprogram(name: "puts", scope: !636, file: !636, line: 661, type: !481, flags: DIFlagPrototyped, spFlags: 0)
!732 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !733, file: !633, line: 131)
!733 = !DISubprogram(name: "remove", scope: !636, file: !636, line: 152, type: !481, flags: DIFlagPrototyped, spFlags: 0)
!734 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !735, file: !633, line: 132)
!735 = !DISubprogram(name: "rename", scope: !636, file: !636, line: 154, type: !736, flags: DIFlagPrototyped, spFlags: 0)
!736 = !DISubroutineType(types: !737)
!737 = !{!27, !98, !98}
!738 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !739, file: !633, line: 133)
!739 = !DISubprogram(name: "rewind", scope: !636, file: !636, line: 723, type: !642, flags: DIFlagPrototyped, spFlags: 0)
!740 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !741, file: !633, line: 134)
!741 = !DISubprogram(name: "scanf", linkageName: "__isoc99_scanf", scope: !636, file: !636, line: 437, type: !724, flags: DIFlagPrototyped, spFlags: 0)
!742 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !743, file: !633, line: 135)
!743 = !DISubprogram(name: "setbuf", scope: !636, file: !636, line: 328, type: !744, flags: DIFlagPrototyped, spFlags: 0)
!744 = !DISubroutineType(types: !745)
!745 = !{null, !661, !169}
!746 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !747, file: !633, line: 136)
!747 = !DISubprogram(name: "setvbuf", scope: !636, file: !636, line: 332, type: !748, flags: DIFlagPrototyped, spFlags: 0)
!748 = !DISubroutineType(types: !749)
!749 = !{!27, !661, !169, !27, !94}
!750 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !751, file: !633, line: 137)
!751 = !DISubprogram(name: "sprintf", scope: !636, file: !636, line: 358, type: !752, flags: DIFlagPrototyped, spFlags: 0)
!752 = !DISubroutineType(types: !753)
!753 = !{!27, !169, !97, null}
!754 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !755, file: !633, line: 138)
!755 = !DISubprogram(name: "sscanf", linkageName: "__isoc99_sscanf", scope: !636, file: !636, line: 439, type: !756, flags: DIFlagPrototyped, spFlags: 0)
!756 = !DISubroutineType(types: !757)
!757 = !{!27, !97, !97, null}
!758 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !759, file: !633, line: 139)
!759 = !DISubprogram(name: "tmpfile", scope: !636, file: !636, line: 188, type: !760, flags: DIFlagPrototyped, spFlags: 0)
!760 = !DISubroutineType(types: !761)
!761 = !{!644}
!762 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !763, file: !633, line: 141)
!763 = !DISubprogram(name: "tmpnam", scope: !636, file: !636, line: 205, type: !764, flags: DIFlagPrototyped, spFlags: 0)
!764 = !DISubroutineType(types: !765)
!765 = !{!170, !170}
!766 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !767, file: !633, line: 143)
!767 = !DISubprogram(name: "ungetc", scope: !636, file: !636, line: 668, type: !678, flags: DIFlagPrototyped, spFlags: 0)
!768 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !769, file: !633, line: 144)
!769 = !DISubprogram(name: "vfprintf", scope: !636, file: !636, line: 365, type: !770, flags: DIFlagPrototyped, spFlags: 0)
!770 = !DISubroutineType(types: !771)
!771 = !{!27, !661, !97, !140}
!772 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !773, file: !633, line: 145)
!773 = !DISubprogram(name: "vprintf", scope: !636, file: !636, line: 371, type: !774, flags: DIFlagPrototyped, spFlags: 0)
!774 = !DISubroutineType(types: !775)
!775 = !{!27, !97, !140}
!776 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !777, file: !633, line: 146)
!777 = !DISubprogram(name: "vsprintf", scope: !636, file: !636, line: 373, type: !778, flags: DIFlagPrototyped, spFlags: 0)
!778 = !DISubroutineType(types: !779)
!779 = !{!27, !169, !97, !140}
!780 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !285, entity: !781, file: !633, line: 175)
!781 = !DISubprogram(name: "snprintf", scope: !636, file: !636, line: 378, type: !782, flags: DIFlagPrototyped, spFlags: 0)
!782 = !DISubroutineType(types: !783)
!783 = !{!27, !169, !94, !97, null}
!784 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !285, entity: !785, file: !633, line: 176)
!785 = !DISubprogram(name: "vfscanf", linkageName: "__isoc99_vfscanf", scope: !636, file: !636, line: 479, type: !770, flags: DIFlagPrototyped, spFlags: 0)
!786 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !285, entity: !787, file: !633, line: 177)
!787 = !DISubprogram(name: "vscanf", linkageName: "__isoc99_vscanf", scope: !636, file: !636, line: 484, type: !774, flags: DIFlagPrototyped, spFlags: 0)
!788 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !285, entity: !789, file: !633, line: 178)
!789 = !DISubprogram(name: "vsnprintf", scope: !636, file: !636, line: 382, type: !790, flags: DIFlagPrototyped, spFlags: 0)
!790 = !DISubroutineType(types: !791)
!791 = !{!27, !169, !94, !97, !140}
!792 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !285, entity: !793, file: !633, line: 179)
!793 = !DISubprogram(name: "vsscanf", linkageName: "__isoc99_vsscanf", scope: !636, file: !636, line: 487, type: !794, flags: DIFlagPrototyped, spFlags: 0)
!794 = !DISubroutineType(types: !795)
!795 = !{!27, !97, !97, !140}
!796 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !781, file: !633, line: 185)
!797 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !785, file: !633, line: 186)
!798 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !787, file: !633, line: 187)
!799 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !789, file: !633, line: 188)
!800 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !793, file: !633, line: 189)
!801 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !802, file: !806, line: 82)
!802 = !DIDerivedType(tag: DW_TAG_typedef, name: "wctrans_t", file: !803, line: 48, baseType: !804)
!803 = !DIFile(filename: "/usr/include/wctype.h", directory: "", checksumkind: CSK_MD5, checksum: "9bcd8e8b8cd2078c8a6c42e262af7d7b")
!804 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !805, size: 64)
!805 = !DIDerivedType(tag: DW_TAG_const_type, baseType: !335)
!806 = !DIFile(filename: "/usr/bin/../lib/gcc/x86_64-linux-gnu/11/../../../../include/c++/11/cwctype", directory: "")
!807 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !808, file: !806, line: 83)
!808 = !DIDerivedType(tag: DW_TAG_typedef, name: "wctype_t", file: !809, line: 38, baseType: !96)
!809 = !DIFile(filename: "/usr/include/x86_64-linux-gnu/bits/wctype-wchar.h", directory: "", checksumkind: CSK_MD5, checksum: "48fed714a84c77fca0455b433489fc47")
!810 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !40, file: !806, line: 84)
!811 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !812, file: !806, line: 86)
!812 = !DISubprogram(name: "iswalnum", scope: !809, file: !809, line: 95, type: !248, flags: DIFlagPrototyped, spFlags: 0)
!813 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !814, file: !806, line: 87)
!814 = !DISubprogram(name: "iswalpha", scope: !809, file: !809, line: 101, type: !248, flags: DIFlagPrototyped, spFlags: 0)
!815 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !816, file: !806, line: 89)
!816 = !DISubprogram(name: "iswblank", scope: !809, file: !809, line: 146, type: !248, flags: DIFlagPrototyped, spFlags: 0)
!817 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !818, file: !806, line: 91)
!818 = !DISubprogram(name: "iswcntrl", scope: !809, file: !809, line: 104, type: !248, flags: DIFlagPrototyped, spFlags: 0)
!819 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !820, file: !806, line: 92)
!820 = !DISubprogram(name: "iswctype", scope: !809, file: !809, line: 159, type: !821, flags: DIFlagPrototyped, spFlags: 0)
!821 = !DISubroutineType(types: !822)
!822 = !{!27, !40, !808}
!823 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !824, file: !806, line: 93)
!824 = !DISubprogram(name: "iswdigit", scope: !809, file: !809, line: 108, type: !248, flags: DIFlagPrototyped, spFlags: 0)
!825 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !826, file: !806, line: 94)
!826 = !DISubprogram(name: "iswgraph", scope: !809, file: !809, line: 112, type: !248, flags: DIFlagPrototyped, spFlags: 0)
!827 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !828, file: !806, line: 95)
!828 = !DISubprogram(name: "iswlower", scope: !809, file: !809, line: 117, type: !248, flags: DIFlagPrototyped, spFlags: 0)
!829 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !830, file: !806, line: 96)
!830 = !DISubprogram(name: "iswprint", scope: !809, file: !809, line: 120, type: !248, flags: DIFlagPrototyped, spFlags: 0)
!831 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !832, file: !806, line: 97)
!832 = !DISubprogram(name: "iswpunct", scope: !809, file: !809, line: 125, type: !248, flags: DIFlagPrototyped, spFlags: 0)
!833 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !834, file: !806, line: 98)
!834 = !DISubprogram(name: "iswspace", scope: !809, file: !809, line: 130, type: !248, flags: DIFlagPrototyped, spFlags: 0)
!835 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !836, file: !806, line: 99)
!836 = !DISubprogram(name: "iswupper", scope: !809, file: !809, line: 135, type: !248, flags: DIFlagPrototyped, spFlags: 0)
!837 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !838, file: !806, line: 100)
!838 = !DISubprogram(name: "iswxdigit", scope: !809, file: !809, line: 140, type: !248, flags: DIFlagPrototyped, spFlags: 0)
!839 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !840, file: !806, line: 101)
!840 = !DISubprogram(name: "towctrans", scope: !803, file: !803, line: 55, type: !841, flags: DIFlagPrototyped, spFlags: 0)
!841 = !DISubroutineType(types: !842)
!842 = !{!40, !40, !802}
!843 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !844, file: !806, line: 102)
!844 = !DISubprogram(name: "towlower", scope: !809, file: !809, line: 166, type: !845, flags: DIFlagPrototyped, spFlags: 0)
!845 = !DISubroutineType(types: !846)
!846 = !{!40, !40}
!847 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !848, file: !806, line: 103)
!848 = !DISubprogram(name: "towupper", scope: !809, file: !809, line: 169, type: !845, flags: DIFlagPrototyped, spFlags: 0)
!849 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !850, file: !806, line: 104)
!850 = !DISubprogram(name: "wctrans", scope: !803, file: !803, line: 52, type: !851, flags: DIFlagPrototyped, spFlags: 0)
!851 = !DISubroutineType(types: !852)
!852 = !{!802, !98}
!853 = !DIImportedEntity(tag: DW_TAG_imported_declaration, scope: !2, entity: !854, file: !806, line: 105)
!854 = !DISubprogram(name: "wctype", scope: !809, file: !809, line: 155, type: !855, flags: DIFlagPrototyped, spFlags: 0)
!855 = !DISubroutineType(types: !856)
!856 = !{!808, !98}
!857 = !{i32 7, !"Dwarf Version", i32 5}
!858 = !{i32 2, !"Debug Info Version", i32 3}
!859 = !{i32 1, !"wchar_size", i32 4}
!860 = !{i32 7, !"PIC Level", i32 2}
!861 = !{i32 7, !"PIE Level", i32 2}
!862 = !{i32 7, !"uwtable", i32 1}
!863 = !{i32 7, !"frame-pointer", i32 2}
!864 = !{!"Ubuntu clang version 14.0.6"}
!865 = distinct !DISubprogram(name: "__cxx_global_var_init", scope: !144, file: !144, type: !466, flags: DIFlagArtificial, spFlags: DISPFlagLocalToUnit | DISPFlagDefinition, unit: !7, retainedNodes: !866)
!866 = !{}
!867 = !DILocation(line: 74, column: 25, scope: !868)
!868 = !DILexicalBlockFile(scope: !865, file: !3, discriminator: 0)
!869 = !DILocation(line: 0, scope: !865)
!870 = distinct !DISubprogram(name: "bar", linkageName: "_Z3bari", scope: !8, file: !8, line: 10, type: !421, scopeLine: 11, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !7, retainedNodes: !866)
!871 = !DILocalVariable(name: "x", arg: 1, scope: !870, file: !8, line: 10, type: !27)
!872 = !DILocation(line: 10, column: 13, scope: !870)
!873 = !DILocalVariable(name: "a", scope: !870, file: !8, line: 12, type: !10)
!874 = !DILocation(line: 12, column: 17, scope: !870)
!875 = !DILocalVariable(name: "b", scope: !870, file: !8, line: 12, type: !10)
!876 = !DILocation(line: 12, column: 20, scope: !870)
!877 = !DILocation(line: 13, column: 9, scope: !878)
!878 = distinct !DILexicalBlock(scope: !870, file: !8, line: 13, column: 9)
!879 = !DILocation(line: 13, column: 11, scope: !878)
!880 = !DILocation(line: 13, column: 9, scope: !870)
!881 = !DILocation(line: 14, column: 9, scope: !878)
!882 = !DILocation(line: 19, column: 1, scope: !870)
!883 = !DILocation(line: 19, column: 1, scope: !878)
!884 = !DILocation(line: 15, column: 9, scope: !885)
!885 = distinct !DILexicalBlock(scope: !870, file: !8, line: 15, column: 9)
!886 = !DILocation(line: 15, column: 11, scope: !885)
!887 = !DILocation(line: 15, column: 9, scope: !870)
!888 = !DILocation(line: 16, column: 9, scope: !885)
!889 = !DILocation(line: 18, column: 12, scope: !870)
!890 = distinct !DISubprogram(name: "ExceptionEx", linkageName: "_ZN11ExceptionExC2Ev", scope: !10, file: !8, line: 6, type: !13, scopeLine: 6, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !7, declaration: !12, retainedNodes: !866)
!891 = !DILocalVariable(name: "this", arg: 1, scope: !890, type: !892, flags: DIFlagArtificial | DIFlagObjectPointer)
!892 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !10, size: 64)
!893 = !DILocation(line: 0, scope: !890)
!894 = !DILocation(line: 6, column: 31, scope: !895)
!895 = distinct !DILexicalBlock(scope: !890, file: !8, line: 6, column: 19)
!896 = !DILocation(line: 6, column: 57, scope: !895)
!897 = !DILocation(line: 6, column: 71, scope: !890)
!898 = distinct !DISubprogram(name: "~ExceptionEx", linkageName: "_ZN11ExceptionExD2Ev", scope: !10, file: !8, line: 7, type: !13, scopeLine: 7, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !7, declaration: !16, retainedNodes: !866)
!899 = !DILocalVariable(name: "this", arg: 1, scope: !898, type: !892, flags: DIFlagArtificial | DIFlagObjectPointer)
!900 = !DILocation(line: 0, scope: !898)
!901 = !DILocation(line: 7, column: 32, scope: !902)
!902 = distinct !DILexicalBlock(scope: !898, file: !8, line: 7, column: 20)
!903 = !DILocation(line: 7, column: 57, scope: !902)
!904 = !DILocation(line: 7, column: 71, scope: !898)
!905 = distinct !DISubprogram(name: "foo", linkageName: "_Z3fooi", scope: !8, file: !8, line: 21, type: !421, scopeLine: 22, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !7, retainedNodes: !866)
!906 = !DILocalVariable(name: "x", arg: 1, scope: !905, file: !8, line: 21, type: !27)
!907 = !DILocation(line: 21, column: 13, scope: !905)
!908 = !DILocalVariable(name: "y", scope: !905, file: !8, line: 23, type: !27)
!909 = !DILocation(line: 23, column: 9, scope: !905)
!910 = !DILocation(line: 26, column: 17, scope: !911)
!911 = distinct !DILexicalBlock(scope: !905, file: !8, line: 25, column: 5)
!912 = !DILocation(line: 26, column: 13, scope: !911)
!913 = !DILocation(line: 26, column: 11, scope: !911)
!914 = !DILocation(line: 27, column: 5, scope: !911)
!915 = !DILocation(line: 33, column: 1, scope: !911)
!916 = !DILocalVariable(name: "e", scope: !905, file: !8, line: 28, type: !27)
!917 = !DILocation(line: 28, column: 16, scope: !905)
!918 = !DILocation(line: 30, column: 13, scope: !919)
!919 = distinct !DILexicalBlock(scope: !905, file: !8, line: 29, column: 5)
!920 = !DILocation(line: 30, column: 11, scope: !919)
!921 = !DILocation(line: 31, column: 5, scope: !919)
!922 = !DILocation(line: 32, column: 12, scope: !905)
!923 = !DILocation(line: 32, column: 5, scope: !905)
!924 = distinct !DISubprogram(name: "main", scope: !8, file: !8, line: 35, type: !925, scopeLine: 36, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !7, retainedNodes: !866)
!925 = !DISubroutineType(types: !926)
!926 = !{!27, !27, !564}
!927 = !DILocalVariable(name: "argc", arg: 1, scope: !924, file: !8, line: 35, type: !27)
!928 = !DILocation(line: 35, column: 14, scope: !924)
!929 = !DILocalVariable(name: "argv", arg: 2, scope: !924, file: !8, line: 35, type: !564)
!930 = !DILocation(line: 35, column: 26, scope: !924)
!931 = !DILocation(line: 37, column: 22, scope: !924)
!932 = !DILocation(line: 37, column: 18, scope: !924)
!933 = !DILocation(line: 37, column: 15, scope: !924)
!934 = !DILocation(line: 37, column: 28, scope: !924)
!935 = !DILocation(line: 38, column: 1, scope: !924)
!936 = distinct !DISubprogram(linkageName: "_GLOBAL__sub_I_prog.cpp", scope: !144, file: !144, type: !937, flags: DIFlagArtificial, spFlags: DISPFlagLocalToUnit | DISPFlagDefinition, unit: !7, retainedNodes: !866)
!937 = !DISubroutineType(types: !866)
!938 = !DILocation(line: 0, scope: !936)
