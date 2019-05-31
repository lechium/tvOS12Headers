/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceServices/VSAssetBase.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSURL, NSDictionary;

@interface VSVoiceResourceAsset : VSAssetBase <NSSecureCoding> {

	float _rate;
	float _pitch;
	float _volume;
	NSArray* _languages;
	NSURL* _searchPathURL;
	NSDictionary* _voiceConfig;
	NSDictionary* _vocalizerConfig;
	NSArray* _resourceList;
	NSDictionary* _resourceMimeTypes;

}

@property (nonatomic,copy) NSDictionary * voiceConfig;                    //@synthesize voiceConfig=_voiceConfig - In the implementation block
@property (assign,nonatomic) float rate;                                  //@synthesize rate=_rate - In the implementation block
@property (assign,nonatomic) float pitch;                                 //@synthesize pitch=_pitch - In the implementation block
@property (assign,nonatomic) float volume;                                //@synthesize volume=_volume - In the implementation block
@property (nonatomic,retain) NSDictionary * vocalizerConfig;              //@synthesize vocalizerConfig=_vocalizerConfig - In the implementation block
@property (nonatomic,copy) NSArray * languages;                           //@synthesize languages=_languages - In the implementation block
@property (nonatomic,copy) NSArray * resourceList;                        //@synthesize resourceList=_resourceList - In the implementation block
@property (nonatomic,copy) NSDictionary * resourceMimeTypes;              //@synthesize resourceMimeTypes=_resourceMimeTypes - In the implementation block
@property (nonatomic,copy) NSURL * searchPathURL;                         //@synthesize searchPathURL=_searchPathURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPitch:(float)arg1 ;
-(float)pitch;
-(NSArray *)languages;
-(void)setLanguages:(NSArray *)arg1 ;
-(void)setSearchPathURL:(NSURL *)arg1 ;
-(NSDictionary *)vocalizerConfig;
-(NSURL *)searchPathURL;
-(NSDictionary *)voiceConfig;
-(NSDictionary *)resourceMimeTypes;
-(NSArray *)resourceList;
-(long long)defaultVoiceGender;
-(long long)defaultVoiceType;
-(long long)defaultVoiceFootprint;
-(id)defaultFootprintString;
-(void)setVoiceConfig:(NSDictionary *)arg1 ;
-(void)setVocalizerConfig:(NSDictionary *)arg1 ;
-(void)setResourceList:(NSArray *)arg1 ;
-(void)setResourceMimeTypes:(NSDictionary *)arg1 ;
-(id)defaultTypeString;
-(id)defaultVoice;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(void)setVolume:(float)arg1 ;
-(float)volume;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)key;
@end

