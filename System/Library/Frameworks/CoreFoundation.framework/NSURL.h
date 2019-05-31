/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSItemProviderReading.h>
#import <libobjc.A.dylib/NSItemProviderWriting.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, NSData, NSNumber;

@interface NSURL : NSObject <NSItemProviderReading, NSItemProviderWriting, NSSecureCoding, NSCopying> {

	NSString* _urlString;
	NSURL* _baseURL;
	void* _clients;
	void* _reserved;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
@property (copy,readonly) NSArray * pathComponents; 
@property (copy,readonly) NSString * lastPathComponent; 
@property (copy,readonly) NSString * pathExtension; 
@property (copy,readonly) NSURL * URLByDeletingLastPathComponent; 
@property (copy,readonly) NSURL * URLByDeletingPathExtension; 
@property (copy,readonly) NSURL * URLByStandardizingPath; 
@property (copy,readonly) NSURL * URLByResolvingSymlinksInPath; 
@property (copy,readonly) NSData * dataRepresentation; 
@property (copy,readonly) NSString * absoluteString; 
@property (copy,readonly) NSString * relativeString; 
@property (copy,readonly) NSURL * baseURL; 
@property (copy,readonly) NSURL * absoluteURL; 
@property (copy,readonly) NSString * scheme; 
@property (copy,readonly) NSString * resourceSpecifier; 
@property (copy,readonly) NSString * host; 
@property (copy,readonly) NSNumber * port; 
@property (copy,readonly) NSString * user; 
@property (copy,readonly) NSString * password; 
@property (copy,readonly) NSString * path; 
@property (copy,readonly) NSString * fragment; 
@property (copy,readonly) NSString * parameterString; 
@property (copy,readonly) NSString * query; 
@property (copy,readonly) NSString * relativePath; 
@property (readonly) BOOL hasDirectoryPath; 
@property (readonly) const char* fileSystemRepresentation; 
@property (getter=isFileURL,readonly) BOOL fileURL; 
@property (copy,readonly) NSURL * standardizedURL; 
@property (copy,readonly) NSURL * filePathURL; 
+(id)_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2 ;
+(id)_URLWithData:(id)arg1 relativeToURL:(id)arg2 ;
+(id)_web_URLWithString:(id)arg1 relativeToURL:(id)arg2 ;
+(id)_web_URLWithComponents:(SCD_Struct_NS32)arg1 ;
+(id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)writableTypeIdentifiersForItemProvider;
+(id)readableTypeIdentifiersForItemProvider;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)fileURLWithPathComponents:(id)arg1 ;
+(id)URLByResolvingBookmarkData:(id)arg1 options:(unsigned long long)arg2 relativeToURL:(id)arg3 bookmarkDataIsStale:(BOOL*)arg4 error:(id*)arg5 ;
+(id)URLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2 ;
+(id)absoluteURLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2 ;
+(id)fileURLWithPath:(id)arg1 isDirectory:(BOOL)arg2 relativeToURL:(id)arg3 ;
+(id)fileURLWithPath:(id)arg1 relativeToURL:(id)arg2 ;
+(id)URLByResolvingAliasFileAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)URLWithString:(id)arg1 ;
+(id)fileURLWithPath:(id)arg1 isDirectory:(BOOL)arg2 ;
+(id)fileURLWithPath:(id)arg1 ;
+(id)fileURLWithFileSystemRepresentation:(const char*)arg1 isDirectory:(BOOL)arg2 relativeToURL:(id)arg3 ;
+(id)URLWithString:(id)arg1 relativeToURL:(id)arg2 ;
+(BOOL)writeBookmarkData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
+(id)resourceValuesForKeys:(id)arg1 fromBookmarkData:(id)arg2 ;
+(id)__unurl;
+(id)bookmarkDataWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)_hostString;
-(id)_web_URLByRemovingLastPathComponent_nowarn;
-(id)_web_URLByRemovingUserAndPath_nowarn;
-(id)_web_URLByRemovingUserAndQueryAndFragment_nowarn;
-(id)_URLByEscapingSpacesAndControlChars;
-(BOOL)_web_isJavaScriptURL;
-(SCD_Struct_NS32)_web_URLComponents;
-(id)_web_scriptIfJavaScriptURL;
-(id)_web_suggestedFilenameWithMIMEType:(id)arg1 ;
-(NSArray *)writableTypeIdentifiersForItemProvider;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(id)_URLArchive;
-(NSURL *)URLByStandardizingPath;
-(NSString *)lastPathComponent;
-(NSURL *)URLByDeletingLastPathComponent;
-(id)URLByAppendingPathComponent:(id)arg1 ;
-(NSArray *)pathComponents;
-(NSString *)pathExtension;
-(NSURL *)URLByDeletingPathExtension;
-(id)URLByAppendingPathExtension:(id)arg1 ;
-(id)URLByAppendingPathComponent:(id)arg1 isDirectory:(BOOL)arg2 ;
-(NSURL *)URLByResolvingSymlinksInPath;
-(unsigned long long)_cfTypeID;
-(CFURLRef)_cfurl;
-(void)_freeClients;
-(BOOL)_isAbsolute;
-(NSString *)relativeString;
-(id)initWithString:(id)arg1 relativeToURL:(id)arg2 ;
-(id)initWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2 ;
-(id)initAbsoluteURLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2 ;
-(id)initFileURLWithPath:(id)arg1 isDirectory:(BOOL)arg2 relativeToURL:(id)arg3 ;
-(id)initFileURLWithPath:(id)arg1 relativeToURL:(id)arg2 ;
-(id)initFileURLWithFileSystemRepresentation:(const char*)arg1 isDirectory:(BOOL)arg2 relativeToURL:(id)arg3 ;
-(id)initByResolvingBookmarkData:(id)arg1 options:(unsigned long long)arg2 relativeToURL:(id)arg3 bookmarkDataIsStale:(BOOL*)arg4 error:(id*)arg5 ;
-(id)initByResolvingAliasFileAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(CFDictionaryRef)_clientsCreatingIfNecessary:(BOOL)arg1 ;
-(id)initWithScheme:(id)arg1 host:(id)arg2 path:(id)arg3 ;
-(NSString *)relativePath;
-(NSString *)parameterString;
-(NSURL *)baseURL;
-(NSData *)dataRepresentation;
-(NSString *)user;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(oneway void)release;
-(id)initWithString:(id)arg1 ;
-(BOOL)isMemberOfClass:(Class)arg1 ;
-(id)retain;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const char*)fileSystemRepresentation;
-(BOOL)isFileURL;
-(NSString *)path;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(NSString *)absoluteString;
-(NSString *)host;
-(NSString *)scheme;
-(NSString *)resourceSpecifier;
-(NSString *)password;
-(NSString *)query;
-(id)initFileURLWithPath:(id)arg1 isDirectory:(BOOL)arg2 ;
-(BOOL)getFileSystemRepresentation:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(BOOL)hasDirectoryPath;
-(NSNumber *)port;
-(NSURL *)absoluteURL;
-(NSURL *)standardizedURL;
-(id)initFileURLWithPath:(id)arg1 ;
-(NSString *)fragment;
-(long long)_promiseExtensionConsume;
-(void)_promiseExtensionRelease:(long long)arg1 ;
-(id)_fixedUpSideFaultError:(id)arg1 ;
-(void)_performWithPhysicalURL:(/*^block*/id)arg1 ;
-(id)_valueFromFaultDictionary:(id)arg1 forKey:(id)arg2 ;
-(BOOL)checkPromisedItemIsReachableAndReturnError:(id*)arg1 ;
-(id)promisedItemResourceValuesForKeys:(id)arg1 error:(id*)arg2 ;
-(BOOL)getPromisedItemResourceValue:(out id*)arg1 forKey:(id)arg2 error:(out id*)arg3 ;
-(BOOL)_isSafeFileForBackgroundUpload:(int)arg1 withToken:(SCD_Struct_NS33)arg2 ;
-(BOOL)_isSafeDirectoryForDownloads:(int)arg1 withToken:(SCD_Struct_NS33)arg2 ;
-(id)bookmarkDataWithAliasRecord:(id)arg1 ;
-(BOOL)isFileReferenceURL;
-(NSURL *)filePathURL;
-(id)bookmarkDataWithOptions:(unsigned long long)arg1 includingResourceValuesForKeys:(id)arg2 relativeToURL:(id)arg3 error:(id*)arg4 ;
-(void)removeCachedResourceValueForKey:(id)arg1 ;
-(BOOL)setResourceValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)setResourceValues:(id)arg1 error:(id*)arg2 ;
-(void)removeAllCachedResourceValues;
-(BOOL)checkResourceIsReachableAndReturnError:(id*)arg1 ;
-(void)stopAccessingSecurityScopedResource;
-(BOOL)startAccessingSecurityScopedResource;
-(void)setTemporaryResourceValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)getResourceValue:(out id*)arg1 forKey:(id)arg2 error:(out id*)arg3 ;
-(id)resourceValuesForKeys:(id)arg1 error:(id*)arg2 ;
-(id)fileReferenceURL;
@end

