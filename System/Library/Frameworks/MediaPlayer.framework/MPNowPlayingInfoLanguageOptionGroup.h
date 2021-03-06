/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, MPNowPlayingInfoLanguageOption;

@interface MPNowPlayingInfoLanguageOptionGroup : NSObject {

	void* _mrLanguageOptionGroup;

}

@property (nonatomic,readonly) void* mrLanguageOptionGroup;                                         //@synthesize mrLanguageOptionGroup=_mrLanguageOptionGroup - In the implementation block
@property (nonatomic,readonly) NSArray * languageOptions; 
@property (nonatomic,readonly) MPNowPlayingInfoLanguageOption * defaultLanguageOption; 
@property (nonatomic,readonly) BOOL allowEmptySelection; 
-(NSArray *)languageOptions;
-(id)initWithLanguageOptions:(id)arg1 defaultLanguageOption:(id)arg2 allowEmptySelection:(BOOL)arg3 ;
-(id)initWithMRLanguageOptionGroup:(void*)arg1 ;
-(void*)mrLanguageOptionGroup;
-(MPNowPlayingInfoLanguageOption *)defaultLanguageOption;
-(BOOL)allowEmptySelection;
-(void)dealloc;
@end

