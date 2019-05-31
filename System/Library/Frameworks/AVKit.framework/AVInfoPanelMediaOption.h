/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, AVMediaSelectionOption, MPAVRoute;

@interface AVInfoPanelMediaOption : NSObject {

	NSString* _displayName;
	NSString* _languageCode;
	AVMediaSelectionOption* _mediaSelectionOption;
	MPAVRoute* _route;

}

@property (nonatomic,readonly) NSString * displayName;                                     //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * languageCode;                                    //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,readonly) AVMediaSelectionOption * mediaSelectionOption;              //@synthesize mediaSelectionOption=_mediaSelectionOption - In the implementation block
@property (nonatomic,readonly) MPAVRoute * route;                                          //@synthesize route=_route - In the implementation block
+(id)optionOff;
+(id)optionAuto;
+(id)optionLateNight;
+(id)optionNormal;
-(MPAVRoute *)route;
-(id)initWithRoute:(id)arg1 ;
-(id)initWithLanguageCode:(id)arg1 ;
-(id)initWithLanguageCode:(id)arg1 displayName:(id)arg2 mediaSelectionOption:(id)arg3 route:(id)arg4 ;
-(id)initWithLanguageCode:(id)arg1 displayName:(id)arg2 mediaSelectionOption:(id)arg3 ;
-(id)initWithDisplayName:(id)arg1 ;
-(id)initWithMediaSelectionOption:(id)arg1 ;
-(AVMediaSelectionOption *)mediaSelectionOption;
-(NSString *)languageCode;
-(NSString *)displayName;
@end

