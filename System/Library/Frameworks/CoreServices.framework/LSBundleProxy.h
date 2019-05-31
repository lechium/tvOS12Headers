/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSResourceProxy.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSUUID, NSArray, _LSLazyPropertyList, _LSBundleIDValidationToken, LSApplicationProxy, NSDictionary;

@interface LSBundleProxy : LSResourceProxy <NSSecureCoding> {

	NSString* _localizedShortName;
	unsigned long long _bundleFlags;
	unsigned _plistContentFlags;
	unsigned char _iconFlags;
	BOOL _foundBackingBundle;
	BOOL _containerized;
	BOOL _profileValidated;
	BOOL _UPPValidated;
	NSString* _bundleType;
	NSURL* _bundleURL;
	NSString* _bundleExecutable;
	NSString* _bundleVersion;
	NSString* _sdkVersion;
	NSString* _signerIdentity;
	NSString* _signerOrganization;
	NSUUID* _cacheGUID;
	unsigned long long _sequenceNumber;
	NSArray* _machOUUIDs;
	unsigned long long _compatibilityState;
	_LSLazyPropertyList* __infoDictionary;
	_LSLazyPropertyList* __groupContainers;
	_LSLazyPropertyList* __entitlements;
	_LSLazyPropertyList* __environmentVariables;
	_LSBundleIDValidationToken* __validationToken;

}

@property (readonly) BOOL _inf_isSystem; 
@property (readonly) BOOL _inf_isWatchKitAppExtension; 
@property (readonly) LSApplicationProxy * _inf_containingAppProxy; 
@property (nonatomic,readonly) NSString * localizedShortName; 
@property (setter=_setInfoDictionary:,nonatomic,copy) _LSLazyPropertyList * _infoDictionary;                          //@synthesize _infoDictionary=__infoDictionary - In the implementation block
@property (nonatomic,copy) NSArray * machOUUIDs;                                                                      //@synthesize machOUUIDs=_machOUUIDs - In the implementation block
@property (setter=setSDKVersion:,nonatomic,copy) NSString * sdkVersion;                                               //@synthesize sdkVersion=_sdkVersion - In the implementation block
@property (setter=_setGroupContainers:,nonatomic,copy) _LSLazyPropertyList * _groupContainers;                        //@synthesize _groupContainers=__groupContainers - In the implementation block
@property (setter=_setEntitlements:,nonatomic,copy) _LSLazyPropertyList * _entitlements;                              //@synthesize _entitlements=__entitlements - In the implementation block
@property (setter=_setEnvironmentVariables:,nonatomic,copy) _LSLazyPropertyList * _environmentVariables;              //@synthesize _environmentVariables=__environmentVariables - In the implementation block
@property (setter=_setValidationToken:,nonatomic,retain) _LSBundleIDValidationToken * _validationToken;               //@synthesize _validationToken=__validationToken - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSString * bundleType;                                                                 //@synthesize bundleType=_bundleType - In the implementation block
@property (nonatomic,readonly) NSURL * bundleURL;                                                                     //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,readonly) NSString * bundleExecutable;                                                           //@synthesize bundleExecutable=_bundleExecutable - In the implementation block
@property (nonatomic,readonly) NSString * canonicalExecutablePath; 
@property (nonatomic,readonly) NSURL * containerURL; 
@property (nonatomic,readonly) NSURL * dataContainerURL; 
@property (nonatomic,readonly) NSURL * bundleContainerURL; 
@property (nonatomic,readonly) NSURL * appStoreReceiptURL; 
@property (nonatomic,readonly) NSString * bundleVersion;                                                              //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,readonly) NSString * signerIdentity;                                                             //@synthesize signerIdentity=_signerIdentity - In the implementation block
@property (nonatomic,readonly) NSDictionary * entitlements; 
@property (nonatomic,readonly) NSDictionary * environmentVariables; 
@property (nonatomic,readonly) NSDictionary * groupContainerURLs; 
@property (nonatomic,readonly) BOOL foundBackingBundle;                                                               //@synthesize foundBackingBundle=_foundBackingBundle - In the implementation block
@property (getter=isContainerized,nonatomic,readonly) BOOL containerized;                                             //@synthesize containerized=_containerized - In the implementation block
@property (nonatomic,readonly) BOOL profileValidated;                                                                 //@synthesize profileValidated=_profileValidated - In the implementation block
@property (nonatomic,readonly) BOOL UPPValidated;                                                                     //@synthesize UPPValidated=_UPPValidated - In the implementation block
@property (nonatomic,readonly) NSString * signerOrganization;                                                         //@synthesize signerOrganization=_signerOrganization - In the implementation block
@property (nonatomic,readonly) NSUUID * cacheGUID;                                                                    //@synthesize cacheGUID=_cacheGUID - In the implementation block
@property (nonatomic,readonly) unsigned long long sequenceNumber;                                                     //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,setter=_setCompatibilityState:,nonatomic) unsigned long long compatibilityState;                    //@synthesize compatibilityState=_compatibilityState - In the implementation block
+(id)bundleProxyForIdentifier:(id)arg1 ;
+(id)bundleProxyForURL:(id)arg1 ;
+(BOOL)canInstantiateFromDatabase;
+(BOOL)bundleProxyForCurrentProcessNeedsUpdate:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)bundleProxyForCurrentProcess;
-(id)un_applicationBundleURL;
-(id)un_applicationBundleIdentifier;
-(LSApplicationProxy *)_inf_containingAppProxy;
-(BOOL)_inf_isWatchKitAppExtension;
-(BOOL)_inf_isSystem;
-(NSURL *)appStoreReceiptURL;
-(NSDictionary *)environmentVariables;
-(NSString *)localizedShortName;
-(NSString *)bundleVersion;
-(unsigned long long)sequenceNumber;
-(NSString *)bundleType;
-(id)entitlementValuesForKeys:(id)arg1 ;
-(NSString *)bundleExecutable;
-(NSURL *)bundleContainerURL;
-(BOOL)profileValidated;
-(NSDictionary *)entitlements;
-(NSDictionary *)groupContainerURLs;
-(id)objectForInfoDictionaryKey:(id)arg1 ofClass:(Class)arg2 ;
-(NSString *)signerIdentity;
-(NSUUID *)cacheGUID;
-(id)objectsForInfoDictionaryKeys:(id)arg1 ;
-(NSString *)canonicalExecutablePath;
-(NSString *)sdkVersion;
-(id)objectForInfoDictionaryKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3 ;
-(BOOL)foundBackingBundle;
-(BOOL)isContainerized;
-(NSArray *)machOUUIDs;
-(id)entitlementValueForKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3 ;
-(id)entitlementValueForKey:(id)arg1 ofClass:(Class)arg2 ;
-(id)_initWithBundleUnit:(unsigned)arg1 context:(LSContext*)arg2 bundleType:(unsigned long long)arg3 bundleID:(id)arg4 localizedName:(id)arg5 bundleContainerURL:(id)arg6 dataContainerURL:(id)arg7 resourcesDirectoryURL:(id)arg8 iconsDictionary:(id)arg9 iconFileNames:(id)arg10 version:(id)arg11 ;
-(_LSBundleIDValidationToken *)_validationToken;
-(BOOL)UPPValidated;
-(NSString *)signerOrganization;
-(id)localizedNameWithPreferredLocalizations:(id)arg1 useShortNameOnly:(BOOL)arg2 ;
-(unsigned long long)_containerClassForLSBundleType:(id)arg1 ;
-(id)_dataContainerURLFromContainerManager;
-(id)appStoreReceiptName;
-(id)_environmentVariablesFromContainerManager;
-(_LSLazyPropertyList *)_environmentVariables;
-(_LSLazyPropertyList *)_entitlements;
-(id)_groupContainerURLsFromContainerManager;
-(_LSLazyPropertyList *)_groupContainers;
-(_LSLazyPropertyList *)_infoDictionary;
-(id)_valueForEqualityTesting;
-(NSURL *)containerURL;
-(id)localizedValuesForKeys:(id)arg1 fromTable:(id)arg2 ;
-(void)setSDKVersion:(id)arg1 ;
-(void)setMachOUUIDs:(NSArray *)arg1 ;
-(unsigned long long)compatibilityState;
-(void)_setCompatibilityState:(unsigned long long)arg1 ;
-(void)_setInfoDictionary:(id)arg1 ;
-(void)_setGroupContainers:(id)arg1 ;
-(void)_setEntitlements:(id)arg1 ;
-(void)_setEnvironmentVariables:(id)arg1 ;
-(void)_setValidationToken:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(unsigned long long)hash;
-(id)localizedName;
-(NSURL *)bundleURL;
-(NSURL *)dataContainerURL;
-(id)uniqueIdentifier;
@end

