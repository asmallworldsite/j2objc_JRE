//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/internal/management/ReflectiveThreadMXBean.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalManagementReflectiveThreadMXBean")
#ifdef RESTRICT_OrgJunitInternalManagementReflectiveThreadMXBean
#define INCLUDE_ALL_OrgJunitInternalManagementReflectiveThreadMXBean 0
#else
#define INCLUDE_ALL_OrgJunitInternalManagementReflectiveThreadMXBean 1
#endif
#undef RESTRICT_OrgJunitInternalManagementReflectiveThreadMXBean

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitInternalManagementReflectiveThreadMXBean_) && (INCLUDE_ALL_OrgJunitInternalManagementReflectiveThreadMXBean || defined(INCLUDE_OrgJunitInternalManagementReflectiveThreadMXBean))
#define OrgJunitInternalManagementReflectiveThreadMXBean_

#define RESTRICT_OrgJunitInternalManagementThreadMXBean 1
#define INCLUDE_OrgJunitInternalManagementThreadMXBean 1
#include "org/junit/internal/management/ThreadMXBean.h"

/*!
 @brief Implementation of <code>ThreadMXBean</code> using the JVM reflectively.
 */
@interface OrgJunitInternalManagementReflectiveThreadMXBean : NSObject < OrgJunitInternalManagementThreadMXBean >

#pragma mark Public

/*!
 */
- (jlong)getThreadCpuTimeWithLong:(jlong)id_;

/*!
 */
- (jboolean)isThreadCpuTimeSupported;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivateWithId:(id)threadMxBean;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalManagementReflectiveThreadMXBean)

FOUNDATION_EXPORT void OrgJunitInternalManagementReflectiveThreadMXBean_initPackagePrivateWithId_(OrgJunitInternalManagementReflectiveThreadMXBean *self, id threadMxBean);

FOUNDATION_EXPORT OrgJunitInternalManagementReflectiveThreadMXBean *new_OrgJunitInternalManagementReflectiveThreadMXBean_initPackagePrivateWithId_(id threadMxBean) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalManagementReflectiveThreadMXBean *create_OrgJunitInternalManagementReflectiveThreadMXBean_initPackagePrivateWithId_(id threadMxBean);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalManagementReflectiveThreadMXBean)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalManagementReflectiveThreadMXBean")
