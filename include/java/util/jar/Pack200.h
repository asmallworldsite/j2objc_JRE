//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/jar/Pack200.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilJarPack200")
#ifdef RESTRICT_JavaUtilJarPack200
#define INCLUDE_ALL_JavaUtilJarPack200 0
#else
#define INCLUDE_ALL_JavaUtilJarPack200 1
#endif
#undef RESTRICT_JavaUtilJarPack200

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilJarPack200_) && (INCLUDE_ALL_JavaUtilJarPack200 || defined(INCLUDE_JavaUtilJarPack200))
#define JavaUtilJarPack200_

@protocol JavaUtilJarPack200_Packer;
@protocol JavaUtilJarPack200_Unpacker;

/*!
 @brief Transforms a JAR file to or from a packed stream in Pack200 format.
 Please refer to Network Transfer Format JSR 200 Specification at 
 <a href=http://jcp.org/aboutJava/communityprocess/review/jsr200/index.html>http://jcp.org/aboutJava/communityprocess/review/jsr200/index.html</a>
  <p>
  Typically the packer engine is used by application developers
  to deploy or host JAR files on a website.
  The unpacker  engine is used by deployment applications to
  transform the byte-stream back to JAR format. 
 <p>
  Here is an example using  packer and unpacker: 
 @code
    import java.util.jar.Pack200;
     import java.util.jar.Pack200.*;
     ...
     // Create the Packer object
     Packer packer = Pack200.newPacker();
     // Initialize the state by setting the desired properties
     Map p = packer.properties();
     // take more time choosing codings for better compression
     p.put(Packer.EFFORT, "7");  // default is "5"
     // use largest-possible archive segments (>10% better compression).
     p.put(Packer.SEGMENT_LIMIT, "-1");
     // reorder files for better compression.
     p.put(Packer.KEEP_FILE_ORDER, Packer.FALSE);
     // smear modification times to a single value.
     p.put(Packer.MODIFICATION_TIME, Packer.LATEST);
     // ignore all JAR deflation requests,
     // transmitting a single request to use "store" mode.
     p.put(Packer.DEFLATE_HINT, Packer.FALSE);
     // discard debug attributes
     p.put(Packer.CODE_ATTRIBUTE_PFX+"LineNumberTable", Packer.STRIP);
     // throw an error if an attribute is unrecognized
     p.put(Packer.UNKNOWN_ATTRIBUTE, Packer.ERROR);
     // pass one class file uncompressed:
     p.put(Packer.PASS_FILE_PFX+0, "mutants/Rogue.class");
     try {
         JarFile jarFile = new JarFile("/tmp/testref.jar");
         FileOutputStream fos = new FileOutputStream("/tmp/test.pack");
         // Call the packer
         packer.pack(jarFile, fos);
         jarFile.close();
         fos.close();
         File f = new File("/tmp/test.pack");
         FileOutputStream fostream = new FileOutputStream("/tmp/test.jar");
         JarOutputStream jostream = new JarOutputStream(fostream);
         Unpacker unpacker = Pack200.newUnpacker();
         // Call the unpacker
         unpacker.unpack(f, jostream);
         // Must explicitly close the output.
         jostream.close();
     } catch (IOException ioe) {
         ioe.printStackTrace();
     } 
 
@endcode
  <p>
  A Pack200 file compressed with gzip can be hosted on HTTP/1.1 web servers.
  The deployment applications can use "Accept-Encoding=pack200-gzip". This
  indicates to the server that the client application desires a version of
  the file encoded with Pack200 and further compressed with gzip. Please
  refer to  <a href="{@@docRoot}/../technotes/guides/deployment/deployment-guide/pack200.html">Java Deployment Guide</a> for more details and
  techniques. 
 <p>
  Unless otherwise noted, passing a <tt>null</tt> argument to a constructor or
  method in this class will cause a <code>NullPointerException</code> to be thrown.
 @author John Rose
 @author Kumar Srinivasan
 @since 1.5
 */
@interface JavaUtilJarPack200 : NSObject

#pragma mark Public

/*!
 @brief Obtain new instance of a class that implements Packer.
 <ul>
  <li><p>If the system property <tt>java.util.jar.Pack200.Packer</tt>
  is defined, then the value is taken to be the fully-qualified name
  of a concrete implementation class, which must implement Packer.
  This class is loaded and instantiated.  If this process fails
  then an unspecified error is thrown.</p></li>
  
 <li><p>If an implementation has not been specified with the system
  property, then the system-default implementation class is instantiated,
  and the result is returned.</p></li>
  </ul>
  
 <p>Note:  The returned object is not guaranteed to operate
  correctly if multiple threads use it at the same time.
  A multi-threaded application should either allocate multiple
  packer engines, or else serialize use of one engine with a lock.
 @return A newly allocated Packer engine.
 */
+ (id<JavaUtilJarPack200_Packer>)newPacker OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Obtain new instance of a class that implements Unpacker.
 <ul>
  <li><p>If the system property <tt>java.util.jar.Pack200.Unpacker</tt>
  is defined, then the value is taken to be the fully-qualified
  name of a concrete implementation class, which must implement Unpacker.
  The class is loaded and instantiated.  If this process fails
  then an unspecified error is thrown.</p></li>
  
 <li><p>If an implementation has not been specified with the
  system property, then the system-default implementation class
  is instantiated, and the result is returned.</p></li>
  </ul>
  
 <p>Note:  The returned object is not guaranteed to operate
  correctly if multiple threads use it at the same time.
  A multi-threaded application should either allocate multiple
  unpacker engines, or else serialize use of one engine with a lock.
 @return A newly allocated Unpacker engine.
 */
+ (id<JavaUtilJarPack200_Unpacker>)newUnpacker OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilJarPack200)

FOUNDATION_EXPORT id<JavaUtilJarPack200_Packer> JavaUtilJarPack200_newPacker(void);

FOUNDATION_EXPORT id<JavaUtilJarPack200_Unpacker> JavaUtilJarPack200_newUnpacker(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilJarPack200)

#endif

#if !defined (JavaUtilJarPack200_Packer_) && (INCLUDE_ALL_JavaUtilJarPack200 || defined(INCLUDE_JavaUtilJarPack200_Packer))
#define JavaUtilJarPack200_Packer_

@class JavaIoOutputStream;
@class JavaUtilJarJarFile;
@class JavaUtilJarJarInputStream;
@protocol JavaUtilSortedMap;

/*!
 @brief The packer engine applies various transformations to the input JAR file,
  making the pack stream highly compressible by a compressor such as
  gzip or zip.An instance of the engine can be obtained
  using <code>newPacker</code>.
 The high degree of compression is achieved
  by using a number of techniques described in the JSR 200 specification.
  Some of the techniques are sorting, re-ordering and co-location of the
  constant pool. 
 <p>
  The pack engine is initialized to an initial state as described
  by their properties below.
  The initial state can be manipulated by getting the
  engine properties (using <code>properties</code>) and storing
  the modified properties on the map.
  The resource files will be passed through with no changes at all.
  The class files will not contain identical bytes, since the unpacker
  is free to change minor class file features such as constant pool order.
  However, the class files will be semantically identical,
  as specified in 
 <cite>The Java&trade; Virtual Machine Specification</cite>.
  <p>
  By default, the packer does not change the order of JAR elements.
  Also, the modification time and deflation hint of each
  JAR element is passed unchanged.
  (Any other ZIP-archive information, such as extra attributes
  giving Unix file permissions, are lost.) 
 <p>
  Note that packing and unpacking a JAR will in general alter the
  bytewise contents of classfiles in the JAR.  This means that packing
  and unpacking will in general invalidate any digital signatures
  which rely on bytewise images of JAR elements.  In order both to sign
  and to pack a JAR, you must first pack and unpack the JAR to
  "normalize" it, then compute signatures on the unpacked JAR elements,
  and finally repack the signed JAR.
  Both packing steps should
  use precisely the same options, and the segment limit may also
  need to be set to "-1", to prevent accidental variation of segment
  boundaries as class file sizes change slightly. 
 <p>
  (Here's why this works:  Any reordering the packer does
  of any classfile structures is idempotent, so the second packing
  does not change the orderings produced by the first packing.
  Also, the unpacker is guaranteed by the JSR 200 specification
  to produce a specific bytewise image for any given transmission
  ordering of archive elements.) 
 <p>
  In order to maintain backward compatibility, the pack file's version is
  set to accommodate the class files present in the input JAR file. In
  other words, the pack file version will be the latest, if the class files
  are the latest and conversely the pack file version will be the oldest
  if the class file versions are also the oldest. For intermediate class
  file versions the corresponding pack file version will be used.
  For example:
     If the input JAR-files are solely comprised of 1.5  (or  lesser)
  class files, a 1.5 compatible pack file is  produced. This will also be
  the case for archives that have no class files.
     If the input JAR-files contains a 1.6 class file, then the pack file
  version will be set to 1.6. 
 <p>
  Note: Unless otherwise noted, passing a <tt>null</tt> argument to a
  constructor or method in this class will cause a <code>NullPointerException</code>
  to be thrown. 
 <p>
 @since 1.5
 */
@protocol JavaUtilJarPack200_Packer < JavaObject >

/*!
 @brief Get the set of this engine's properties.
 This set is a "live view", so that changing its
  contents immediately affects the Packer engine, and
  changes from the engine (such as progress indications)
  are immediately visible in the map. 
 <p>The property map may contain pre-defined implementation
  specific and default properties.  Users are encouraged to
  read the information and fully understand the implications,
  before modifying pre-existing properties. 
 <p>
  Implementation specific properties are prefixed with a
  package name associated with the implementor, beginning with 
 <tt>com.</tt> or a similar prefix.
  All property names beginning with <tt>pack.</tt> and 
 <tt>unpack.</tt> are reserved for use by this API. 
 <p>
  Unknown properties may be ignored or rejected with an
  unspecified error, and invalid entries may cause an
  unspecified error to be thrown. 
 <p>
  The returned map implements all optional <code>SortedMap</code> operations
 @return A sorted association of property key strings to property
  values.
 */
- (id<JavaUtilSortedMap>)properties;

/*!
 @brief Takes a JarFile and converts it into a Pack200 archive.
 <p>
  Closes its input but not its output.  (Pack200 archives are appendable.)
 @param inArg a JarFile
 @param outArg an OutputStream
 @throw IOExceptionif an error is encountered.
 */
- (void)packWithJavaUtilJarJarFile:(JavaUtilJarJarFile *)inArg
            withJavaIoOutputStream:(JavaIoOutputStream *)outArg;

/*!
 @brief Takes a JarInputStream and converts it into a Pack200 archive.
 <p>
  Closes its input but not its output.  (Pack200 archives are appendable.) 
 <p>
  The modification time and deflation hint attributes are not available,
  for the JAR manifest file and its containing directory.
 - seealso: #MODIFICATION_TIME
 - seealso: #DEFLATE_HINT
 @param inArg a JarInputStream
 @param outArg an OutputStream
 @throw IOExceptionif an error is encountered.
 */
- (void)packWithJavaUtilJarJarInputStream:(JavaUtilJarJarInputStream *)inArg
                   withJavaIoOutputStream:(JavaIoOutputStream *)outArg;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilJarPack200_Packer)

/*!
 @brief This property is a numeral giving the estimated target size N
  (in bytes) of each archive segment.
 If a single input file requires more than N bytes,
  it will be given its own archive segment. 
 <p>
  As a special case, a value of -1 will produce a single large
  segment with all input files, while a value of 0 will
  produce one segment for each class.
  Larger archive segments result in less fragmentation and
  better compression, but processing them requires more memory. 
 <p>
  The size of each segment is estimated by counting the size of each
  input file to be transmitted in the segment, along with the size
  of its name and other transmitted properties. 
 <p>
  The default is -1, which means the packer will always create a single
  segment output file. In cases where extremely large output files are
  generated, users are strongly encouraged to use segmenting or break
  up the input file into smaller JARs. 
 <p>
  A 10Mb JAR packed without this limit will
  typically pack about 10% smaller, but the packer may require
  a larger Java heap (about ten times the segment limit).
 */
inline NSString *JavaUtilJarPack200_Packer_get_SEGMENT_LIMIT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaUtilJarPack200_Packer_SEGMENT_LIMIT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilJarPack200_Packer, SEGMENT_LIMIT, NSString *)

/*!
 @brief If this property is set to <code>TRUE</code>, the packer will transmit
  all elements in their original order within the source archive.
 <p>
  If it is set to <code>FALSE</code>, the packer may reorder elements,
  and also remove JAR directory entries, which carry no useful
  information for Java applications.
  (Typically this enables better compression.) 
 <p>
  The default is <code>TRUE</code>, which preserves the input information,
  but may cause the transmitted archive to be larger than necessary.
 */
inline NSString *JavaUtilJarPack200_Packer_get_KEEP_FILE_ORDER(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaUtilJarPack200_Packer_KEEP_FILE_ORDER;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilJarPack200_Packer, KEEP_FILE_ORDER, NSString *)

/*!
 @brief If this property is set to a single decimal digit, the packer will
  use the indicated amount of effort in compressing the archive.
 Level 1 may produce somewhat larger size and faster compression speed,
  while level 9 will take much longer but may produce better compression. 
 <p>
  The special value 0 instructs the packer to copy through the
  original JAR file directly, with no compression.  The JSR 200
  standard requires any unpacker to understand this special case
  as a pass-through of the entire archive. 
 <p>
  The default is 5, investing a modest amount of time to
  produce reasonable compression.
 */
inline NSString *JavaUtilJarPack200_Packer_get_EFFORT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaUtilJarPack200_Packer_EFFORT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilJarPack200_Packer, EFFORT, NSString *)

/*!
 @brief If this property is set to <code>TRUE</code> or <code>FALSE</code>, the packer
  will set the deflation hint accordingly in the output archive, and
  will not transmit the individual deflation hints of archive elements.
 <p>
  If this property is set to the special string <code>KEEP</code>, the packer
  will attempt to determine an independent deflation hint for each
  available element of the input archive, and transmit this hint separately. 
 <p>
  The default is <code>KEEP</code>, which preserves the input information,
  but may cause the transmitted archive to be larger than necessary. 
 <p>
  It is up to the unpacker implementation
  to take action upon the hint to suitably compress the elements of
  the resulting unpacked jar. 
 <p>
  The deflation hint of a ZIP or JAR element indicates
  whether the element was deflated or stored directly.
 */
inline NSString *JavaUtilJarPack200_Packer_get_DEFLATE_HINT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaUtilJarPack200_Packer_DEFLATE_HINT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilJarPack200_Packer, DEFLATE_HINT, NSString *)

/*!
 @brief If this property is set to the special string <code>LATEST</code>,
  the packer will attempt to determine the latest modification time,
  among all the available entries in the original archive or the latest
  modification time of all the available entries in each segment.
 This single value will be transmitted as part of the segment and applied
  to all the entries in each segment, <code>SEGMENT_LIMIT</code>.
  <p>
  This can marginally decrease the transmitted size of the
  archive, at the expense of setting all installed files to a single
  date. 
 <p>
  If this property is set to the special string <code>KEEP</code>,
  the packer transmits a separate modification time for each input
  element. 
 <p>
  The default is <code>KEEP</code>, which preserves the input information,
  but may cause the transmitted archive to be larger than necessary. 
 <p>
  It is up to the unpacker implementation to take action to suitably
  set the modification time of each element of its output file.
 - seealso: #SEGMENT_LIMIT
 */
inline NSString *JavaUtilJarPack200_Packer_get_MODIFICATION_TIME(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaUtilJarPack200_Packer_MODIFICATION_TIME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilJarPack200_Packer, MODIFICATION_TIME, NSString *)

/*!
 @brief Indicates that a file should be passed through bytewise, with no
  compression.Multiple files may be specified by specifying
  additional properties with distinct strings appended, to
  make a family of properties with the common prefix.
 <p>
  There is no pathname transformation, except
  that the system file separator is replaced by the JAR file
  separator '/'. 
 <p>
  The resulting file names must match exactly as strings with their
  occurrences in the JAR file. 
 <p>
  If a property value is a directory name, all files under that
  directory will be passed also. 
 <p>
  Examples: 
 @code
     Map p = packer.properties();
      p.put(PASS_FILE_PFX+0, "mutants/Rogue.class");
      p.put(PASS_FILE_PFX+1, "mutants/Wolverine.class");
      p.put(PASS_FILE_PFX+2, "mutants/Storm.class");
      # Pass all files in an entire directory hierarchy:
      p.put(PASS_FILE_PFX+3, "police/"); 
 
@endcode
 */
inline NSString *JavaUtilJarPack200_Packer_get_PASS_FILE_PFX(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaUtilJarPack200_Packer_PASS_FILE_PFX;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilJarPack200_Packer, PASS_FILE_PFX, NSString *)

/*!
 @brief Indicates the action to take when a class-file containing an unknown
  attribute is encountered.Possible values are the strings <code>ERROR</code>,
  <code>STRIP</code>, and <code>PASS</code>.
 <p>
  The string <code>ERROR</code> means that the pack operation
  as a whole will fail, with an exception of type <code>IOException</code>.
  The string 
 <code>STRIP</code> means that the attribute will be dropped.
  The string 
 <code>PASS</code> means that the whole class-file will be passed through
  (as if it were a resource file) without compression, with  a suitable warning.
  This is the default value for this property. 
 <p>
  Examples: 
 @code
     Map p = pack200.getProperties();
      p.put(UNKNOWN_ATTRIBUTE, ERROR);
      p.put(UNKNOWN_ATTRIBUTE, STRIP);
      p.put(UNKNOWN_ATTRIBUTE, PASS); 
 
@endcode
 */
inline NSString *JavaUtilJarPack200_Packer_get_UNKNOWN_ATTRIBUTE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaUtilJarPack200_Packer_UNKNOWN_ATTRIBUTE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilJarPack200_Packer, UNKNOWN_ATTRIBUTE, NSString *)

/*!
 @brief When concatenated with a class attribute name,
  indicates the format of that attribute,
  using the layout language specified in the JSR 200 specification.
 <p>
  For example, the effect of this option is built in: 
 <code>pack.class.attribute.SourceFile=RUH</code>.
  <p>
  The special strings <code>ERROR</code>, <code>STRIP</code>, and <code>PASS</code> are
  also allowed, with the same meaning as <code>UNKNOWN_ATTRIBUTE</code>.
  This provides a way for users to request that specific attributes be
  refused, stripped, or passed bitwise (with no class compression). 
 <p>
  Code like this might be used to support attributes for JCOV: 
 @code
<code>
      Map p = packer.properties();
      p.put(CODE_ATTRIBUTE_PFX+"CoverageTable",       "NH[PHHII]");
      p.put(CODE_ATTRIBUTE_PFX+"CharacterRangeTable", "NH[PHPOHIIH]");
      p.put(CLASS_ATTRIBUTE_PFX+"SourceID",           "RUH");
      p.put(CLASS_ATTRIBUTE_PFX+"CompilationID",      "RUH"); 
  </code>
@endcode
  <p>
  Code like this might be used to strip debugging attributes: 
 @code
<code>
      Map p = packer.properties();
      p.put(CODE_ATTRIBUTE_PFX+"LineNumberTable",    STRIP);
      p.put(CODE_ATTRIBUTE_PFX+"LocalVariableTable", STRIP);
      p.put(CLASS_ATTRIBUTE_PFX+"SourceFile",        STRIP); 
  </code>
@endcode
 */
inline NSString *JavaUtilJarPack200_Packer_get_CLASS_ATTRIBUTE_PFX(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaUtilJarPack200_Packer_CLASS_ATTRIBUTE_PFX;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilJarPack200_Packer, CLASS_ATTRIBUTE_PFX, NSString *)

/*!
 @brief When concatenated with a field attribute name,
  indicates the format of that attribute.
 For example, the effect of this option is built in: 
 <code>pack.field.attribute.Deprecated=</code>.
  The special strings <code>ERROR</code>, <code>STRIP</code>, and 
 <code>PASS</code> are also allowed.
 - seealso: #CLASS_ATTRIBUTE_PFX
 */
inline NSString *JavaUtilJarPack200_Packer_get_FIELD_ATTRIBUTE_PFX(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaUtilJarPack200_Packer_FIELD_ATTRIBUTE_PFX;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilJarPack200_Packer, FIELD_ATTRIBUTE_PFX, NSString *)

/*!
 @brief When concatenated with a method attribute name,
  indicates the format of that attribute.
 For example, the effect of this option is built in: 
 <code>pack.method.attribute.Exceptions=NH[RCH]</code>.
  The special strings <code>ERROR</code>, <code>STRIP</code>, and <code>PASS</code>
  are also allowed.
 - seealso: #CLASS_ATTRIBUTE_PFX
 */
inline NSString *JavaUtilJarPack200_Packer_get_METHOD_ATTRIBUTE_PFX(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaUtilJarPack200_Packer_METHOD_ATTRIBUTE_PFX;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilJarPack200_Packer, METHOD_ATTRIBUTE_PFX, NSString *)

/*!
 @brief When concatenated with a code attribute name,
  indicates the format of that attribute.
 For example, the effect of this option is built in: 
 <code>pack.code.attribute.LocalVariableTable=NH[PHOHRUHRSHH]</code>.
  The special strings <code>ERROR</code>, <code>STRIP</code>, and <code>PASS</code>
  are also allowed.
 - seealso: #CLASS_ATTRIBUTE_PFX
 */
inline NSString *JavaUtilJarPack200_Packer_get_CODE_ATTRIBUTE_PFX(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaUtilJarPack200_Packer_CODE_ATTRIBUTE_PFX;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilJarPack200_Packer, CODE_ATTRIBUTE_PFX, NSString *)

/*!
 @brief The unpacker's progress as a percentage, as periodically
  updated by the unpacker.
 Values of 0 - 100 are normal, and -1 indicates a stall.
  Progress can be monitored by polling the value of this
  property. 
 <p>
  At a minimum, the unpacker must set progress to 0
  at the beginning of a packing operation, and to 100
  at the end.
 */
inline NSString *JavaUtilJarPack200_Packer_get_PROGRESS(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaUtilJarPack200_Packer_PROGRESS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilJarPack200_Packer, PROGRESS, NSString *)

/*!
 @brief The string "keep", a possible value for certain properties.
 - seealso: #DEFLATE_HINT
 - seealso: #MODIFICATION_TIME
 */
inline NSString *JavaUtilJarPack200_Packer_get_KEEP(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaUtilJarPack200_Packer_KEEP;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilJarPack200_Packer, KEEP, NSString *)

/*!
 @brief The string "pass", a possible value for certain properties.
 - seealso: #UNKNOWN_ATTRIBUTE
 - seealso: #CLASS_ATTRIBUTE_PFX
 - seealso: #FIELD_ATTRIBUTE_PFX
 - seealso: #METHOD_ATTRIBUTE_PFX
 - seealso: #CODE_ATTRIBUTE_PFX
 */
inline NSString *JavaUtilJarPack200_Packer_get_PASS(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaUtilJarPack200_Packer_PASS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilJarPack200_Packer, PASS, NSString *)

/*!
 @brief The string "strip", a possible value for certain properties.
 - seealso: #UNKNOWN_ATTRIBUTE
 - seealso: #CLASS_ATTRIBUTE_PFX
 - seealso: #FIELD_ATTRIBUTE_PFX
 - seealso: #METHOD_ATTRIBUTE_PFX
 - seealso: #CODE_ATTRIBUTE_PFX
 */
inline NSString *JavaUtilJarPack200_Packer_get_STRIP(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaUtilJarPack200_Packer_STRIP;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilJarPack200_Packer, STRIP, NSString *)

/*!
 @brief The string "error", a possible value for certain properties.
 - seealso: #UNKNOWN_ATTRIBUTE
 - seealso: #CLASS_ATTRIBUTE_PFX
 - seealso: #FIELD_ATTRIBUTE_PFX
 - seealso: #METHOD_ATTRIBUTE_PFX
 - seealso: #CODE_ATTRIBUTE_PFX
 */
inline NSString *JavaUtilJarPack200_Packer_get_ERROR(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaUtilJarPack200_Packer_ERROR;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilJarPack200_Packer, ERROR, NSString *)

/*!
 @brief The string "true", a possible value for certain properties.
 - seealso: #KEEP_FILE_ORDER
 - seealso: #DEFLATE_HINT
 */
inline NSString *JavaUtilJarPack200_Packer_get_TRUE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaUtilJarPack200_Packer_TRUE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilJarPack200_Packer, TRUE, NSString *)

/*!
 @brief The string "false", a possible value for certain properties.
 - seealso: #KEEP_FILE_ORDER
 - seealso: #DEFLATE_HINT
 */
inline NSString *JavaUtilJarPack200_Packer_get_FALSE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaUtilJarPack200_Packer_FALSE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilJarPack200_Packer, FALSE, NSString *)

/*!
 @brief The string "latest", a possible value for certain properties.
 - seealso: #MODIFICATION_TIME
 */
inline NSString *JavaUtilJarPack200_Packer_get_LATEST(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaUtilJarPack200_Packer_LATEST;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilJarPack200_Packer, LATEST, NSString *)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilJarPack200_Packer)

#endif

#if !defined (JavaUtilJarPack200_Unpacker_) && (INCLUDE_ALL_JavaUtilJarPack200 || defined(INCLUDE_JavaUtilJarPack200_Unpacker))
#define JavaUtilJarPack200_Unpacker_

@class JavaIoFile;
@class JavaIoInputStream;
@class JavaUtilJarJarOutputStream;
@protocol JavaUtilSortedMap;

/*!
 @brief The unpacker engine converts the packed stream to a JAR file.
 An instance of the engine can be obtained
  using <code>newUnpacker</code>.
  <p>
  Every JAR file produced by this engine will include the string
  "<tt>PACK200</tt>" as a zip file comment.
  This allows a deployer to detect if a JAR archive was packed and unpacked. 
 <p>
  Note: Unless otherwise noted, passing a <tt>null</tt> argument to a
  constructor or method in this class will cause a <code>NullPointerException</code>
  to be thrown. 
 <p>
  This version of the unpacker is compatible with all previous versions.
 @since 1.5
 */
@protocol JavaUtilJarPack200_Unpacker < JavaObject >

/*!
 @brief Get the set of this engine's properties.This set is
  a "live view", so that changing its
  contents immediately affects the Packer engine, and
  changes from the engine (such as progress indications)
  are immediately visible in the map.
 <p>The property map may contain pre-defined implementation
  specific and default properties.  Users are encouraged to
  read the information and fully understand the implications,
  before modifying pre-existing properties. 
 <p>
  Implementation specific properties are prefixed with a
  package name associated with the implementor, beginning with 
 <tt>com.</tt> or a similar prefix.
  All property names beginning with <tt>pack.</tt> and 
 <tt>unpack.</tt> are reserved for use by this API. 
 <p>
  Unknown properties may be ignored or rejected with an
  unspecified error, and invalid entries may cause an
  unspecified error to be thrown.
 @return A sorted association of option key strings to option values.
 */
- (id<JavaUtilSortedMap>)properties;

/*!
 @brief Read a Pack200 archive, and write the encoded JAR to
  a JarOutputStream.
 The entire contents of the input stream will be read.
  It may be more efficient to read the Pack200 archive
  to a file and pass the File object, using the alternate
  method described below. 
 <p>
  Closes its input but not its output.  (The output can accumulate more elements.)
 @param inArg an InputStream.
 @param outArg a JarOutputStream.
 @throw IOExceptionif an error is encountered.
 */
- (void)unpackWithJavaIoInputStream:(JavaIoInputStream *)inArg
     withJavaUtilJarJarOutputStream:(JavaUtilJarJarOutputStream *)outArg;

/*!
 @brief Read a Pack200 archive, and write the encoded JAR to
  a JarOutputStream.
 <p>
  Does not close its output.  (The output can accumulate more elements.)
 @param inArg a File.
 @param outArg a JarOutputStream.
 @throw IOExceptionif an error is encountered.
 */
- (void)unpackWithJavaIoFile:(JavaIoFile *)inArg
withJavaUtilJarJarOutputStream:(JavaUtilJarJarOutputStream *)outArg;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilJarPack200_Unpacker)

/*!
 @brief The string "keep", a possible value for certain properties.
 - seealso: #DEFLATE_HINT
 */
inline NSString *JavaUtilJarPack200_Unpacker_get_KEEP(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaUtilJarPack200_Unpacker_KEEP;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilJarPack200_Unpacker, KEEP, NSString *)

/*!
 @brief The string "true", a possible value for certain properties.
 - seealso: #DEFLATE_HINT
 */
inline NSString *JavaUtilJarPack200_Unpacker_get_TRUE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaUtilJarPack200_Unpacker_TRUE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilJarPack200_Unpacker, TRUE, NSString *)

/*!
 @brief The string "false", a possible value for certain properties.
 - seealso: #DEFLATE_HINT
 */
inline NSString *JavaUtilJarPack200_Unpacker_get_FALSE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaUtilJarPack200_Unpacker_FALSE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilJarPack200_Unpacker, FALSE, NSString *)

/*!
 @brief Property indicating that the unpacker should
  ignore all transmitted values for DEFLATE_HINT,
  replacing them by the given value, <code>TRUE</code> or <code>FALSE</code>.
 The default value is the special string <code>KEEP</code>,
  which asks the unpacker to preserve all transmitted
  deflation hints.
 */
inline NSString *JavaUtilJarPack200_Unpacker_get_DEFLATE_HINT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaUtilJarPack200_Unpacker_DEFLATE_HINT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilJarPack200_Unpacker, DEFLATE_HINT, NSString *)

/*!
 @brief The unpacker's progress as a percentage, as periodically
  updated by the unpacker.
 Values of 0 - 100 are normal, and -1 indicates a stall.
  Progress can be monitored by polling the value of this
  property. 
 <p>
  At a minimum, the unpacker must set progress to 0
  at the beginning of a packing operation, and to 100
  at the end.
 */
inline NSString *JavaUtilJarPack200_Unpacker_get_PROGRESS(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaUtilJarPack200_Unpacker_PROGRESS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilJarPack200_Unpacker, PROGRESS, NSString *)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilJarPack200_Unpacker)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaUtilJarPack200")
