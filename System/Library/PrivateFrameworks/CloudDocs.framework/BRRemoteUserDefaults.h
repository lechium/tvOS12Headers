/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSSet;

@interface BRRemoteUserDefaults : NSObject {

	NSMutableDictionary* _userDictionaryCache;

}

@property (nonatomic,readonly) NSSet * excludedFilenamesWorthWarningAtLogout; 
@property (nonatomic,readonly) NSSet * excludedExtensionsWorthPreserving; 
@property (nonatomic,readonly) long long minFileSizeForThumbnailTransfer; 
+(id)sharedDefaults;
+(id)defaultExcludedFilenamesWorthWarningAtLogout;
+(id)defaultExcludedExtensionsWorthPreserving;
+(id)defaultExcludedFilenamesWorthPreserving;
-(NSSet *)excludedFilenamesWorthWarningAtLogout;
-(NSSet *)excludedExtensionsWorthPreserving;
-(long long)minFileSizeForThumbnailTransfer;
-(id)init;
-(id)_init;
@end
