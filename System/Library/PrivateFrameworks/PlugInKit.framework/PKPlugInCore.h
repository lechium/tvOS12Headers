/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSURL, NSUUID, NSData, NSDate;

@interface PKPlugInCore : NSObject {

	BOOL _onSystemVolume;
	NSDictionary* _plugInDictionary;
	NSString* _identifier;
	NSString* _originalIdentifier;
	NSURL* _url;
	NSURL* _containingUrl;
	NSDictionary* _bundleInfoDictionary;
	NSDictionary* _entitlements;
	unsigned long long _hubProtocolVersion;
	NSString* _localizedName;
	NSString* _localizedShortName;
	NSString* _localizedContainingName;
	NSDictionary* _localizedFileProviderActionNames;
	NSDictionary* _annotations;
	long long _lastModified;
	NSUUID* _uuid;
	NSData* _cdhash;
	NSString* _requirement;
	NSURL* _dataContainerURL;

}

@property (retain) NSString * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * originalIdentifier;                                //@synthesize originalIdentifier=_originalIdentifier - In the implementation block
@property (retain) NSURL * url;                                                  //@synthesize url=_url - In the implementation block
@property (retain) NSDictionary * bundleInfoDictionary;                          //@synthesize bundleInfoDictionary=_bundleInfoDictionary - In the implementation block
@property (retain) NSDictionary * plugInDictionary;                              //@synthesize plugInDictionary=_plugInDictionary - In the implementation block
@property (retain) NSDictionary * entitlements;                                  //@synthesize entitlements=_entitlements - In the implementation block
@property (retain) NSDictionary * annotations;                                   //@synthesize annotations=_annotations - In the implementation block
@property (readonly) BOOL oldStyle; 
@property (retain) NSURL * containingUrl;                                        //@synthesize containingUrl=_containingUrl - In the implementation block
@property (readonly) NSString * path; 
@property (readonly) NSString * containingPath; 
@property (assign) BOOL onSystemVolume;                                          //@synthesize onSystemVolume=_onSystemVolume - In the implementation block
@property (readonly) NSDictionary * attributes; 
@property (readonly) NSString * version; 
@property (readonly) id protocolSpec; 
@property (readonly) NSString * principalSpec; 
@property (assign) unsigned long long hubProtocolVersion;                        //@synthesize hubProtocolVersion=_hubProtocolVersion - In the implementation block
@property (readonly) NSString * sdkSpec; 
@property (retain) NSString * localizedName;                                     //@synthesize localizedName=_localizedName - In the implementation block
@property (retain) NSString * localizedShortName;                                //@synthesize localizedShortName=_localizedShortName - In the implementation block
@property (retain) NSString * localizedContainingName;                           //@synthesize localizedContainingName=_localizedContainingName - In the implementation block
@property (retain) NSDictionary * localizedFileProviderActionNames;              //@synthesize localizedFileProviderActionNames=_localizedFileProviderActionNames - In the implementation block
@property (assign) long long lastModified;                                       //@synthesize lastModified=_lastModified - In the implementation block
@property (readonly) NSDate * timestamp; 
@property (retain) NSUUID * uuid;                                                //@synthesize uuid=_uuid - In the implementation block
@property (retain) NSData * cdhash;                                              //@synthesize cdhash=_cdhash - In the implementation block
@property (retain) NSString * requirement;                                       //@synthesize requirement=_requirement - In the implementation block
@property (readonly) BOOL isAppExtension; 
@property (readonly) BOOL isMultiplexed; 
@property (readonly) BOOL isHybrid; 
@property (readonly) BOOL isDedicated; 
@property (readonly) BOOL isData; 
@property (nonatomic,readonly) NSURL * dataContainerURL;                         //@synthesize dataContainerURL=_dataContainerURL - In the implementation block
+(id)readSDKDictionary:(id)arg1 ;
-(NSString *)localizedShortName;
-(void)localizedInfoDictionaryForKeys:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithForm:(id)arg1 ;
-(void)setAnnotation:(id)arg1 value:(id)arg2 ;
-(id)diagnose;
-(id)infoKey:(id)arg1 ;
-(id)protocolSpec;
-(id)augmentInterface:(id)arg1 ;
-(unsigned long long)hubProtocolVersion;
-(void)updateFromForm:(id)arg1 ;
-(BOOL)setupWithName:(id)arg1 url:(id)arg2 bundleInfo:(id)arg3 info:(id)arg4 uuid:(id)arg5 ;
-(void)setPlugInDictionary:(NSDictionary *)arg1 ;
-(BOOL)setupWithForm:(id)arg1 ;
-(id)normalizeInfoDictionary:(id)arg1 ;
-(BOOL)setDictionaries:(id)arg1 ;
-(void)setHubProtocolVersion:(unsigned long long)arg1 ;
-(void)setOriginalIdentifier:(NSString *)arg1 ;
-(void)setCdhash:(NSData *)arg1 ;
-(void)setContainingUrl:(NSURL *)arg1 ;
-(void)setOnSystemVolume:(BOOL)arg1 ;
-(void)setLocalizedShortName:(NSString *)arg1 ;
-(void)setLocalizedContainingName:(NSString *)arg1 ;
-(void)setLocalizedFileProviderActionNames:(NSDictionary *)arg1 ;
-(id)attribute:(id)arg1 ;
-(NSString *)sdkSpec;
-(id)mergeDictionary:(id)arg1 into:(id)arg2 ;
-(void)canonicalize;
-(BOOL)sdkOverridesKey:(id)arg1 ;
-(id)mergeSharedResources:(id)arg1 into:(id)arg2 ;
-(NSString *)containingPath;
-(BOOL)isAppExtension;
-(NSString *)principalSpec;
-(id)pluginKey:(id)arg1 ;
-(BOOL)isHybrid;
-(id)initWithName:(id)arg1 url:(id)arg2 bundleInfo:(id)arg3 info:(id)arg4 uuid:(id)arg5 ;
-(void)resolveSDK;
-(id)export:(id*)arg1 ;
-(BOOL)oldStyle;
-(id)embeddedCodePath;
-(id)embeddedProtocolSpec;
-(BOOL)isMultiplexed;
-(BOOL)isDedicated;
-(void)setBundleInfoDictionary:(NSDictionary *)arg1 ;
-(NSData *)cdhash;
-(void)setLocalizedName:(NSString *)arg1 ;
-(long long)lastModified;
-(void)setLastModified:(long long)arg1 ;
-(NSDictionary *)entitlements;
-(NSDictionary *)annotations;
-(void)setAnnotations:(NSDictionary *)arg1 ;
-(BOOL)isData;
-(void)setEntitlements:(NSDictionary *)arg1 ;
-(BOOL)onSystemVolume;
-(NSDictionary *)plugInDictionary;
-(NSDictionary *)localizedFileProviderActionNames;
-(NSString *)originalIdentifier;
-(id)init;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSUUID *)uuid;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDate *)timestamp;
-(NSString *)version;
-(NSDictionary *)attributes;
-(NSString *)path;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)localizedName;
-(NSURL *)containingUrl;
-(NSString *)localizedContainingName;
-(NSURL *)dataContainerURL;
-(void)setRequirement:(NSString *)arg1 ;
-(NSString *)requirement;
-(NSDictionary *)bundleInfoDictionary;
@end

