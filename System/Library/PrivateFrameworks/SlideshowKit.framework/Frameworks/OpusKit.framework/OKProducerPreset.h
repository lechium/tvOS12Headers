/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSArray;

@interface OKProducerPreset : NSObject {

	NSString* _family;
	NSString* _name;
	NSDictionary* _presetDictionary;
	NSString* _localizedName;
	NSArray* _guidelines;
	NSArray* _audioURLs;

}
-(BOOL)isDefault;
-(id)family;
-(BOOL)isAvailable;
-(id)initWithFamily:(id)arg1 name:(id)arg2 andDictionary:(id)arg3 ;
-(id)initWithFamily:(id)arg1 andPluginIdentifier:(id)arg2 ;
-(id)_settingKeyForType:(unsigned long long)arg1 ;
-(id)guidelines;
-(id)audioURLs;
-(BOOL)supportsSettingType:(unsigned long long)arg1 ;
-(id)pluginIdentifier;
-(id)init;
-(void)dealloc;
-(id)backgroundColor;
-(id)localizedName;
-(BOOL)isLocal;
-(id)uniqueIdentifier;
@end

