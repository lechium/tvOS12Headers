/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:22 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/KonaClip.h>

@interface AudioClip : KonaClip {

	BOOL startOffsetValidated;
	BOOL cachedFades;
	int cachedFadeIn;
	int cachedFadeOut;

}

@property (assign,nonatomic) int cachedFadeIn; 
@property (assign,nonatomic) int cachedFadeOut; 
@property (assign,nonatomic) BOOL cachedFades; 
@property (assign,nonatomic) int audioType; 
@property (assign,nonatomic) BOOL startOffsetValidated; 
+(BOOL)audioEnabledByDefault;
+(int)defaultAudioTypeForClipType:(int)arg1 ;
+(int)defaultClipTypeForAudioType:(int)arg1 ;
+(id)backgroundClip;
+(id)soundEffectClip;
-(int)clipType;
-(BOOL)hasAudioCharacteristic;
-(void)setAudioFadeOutDuration:(int)arg1 ;
-(void)setAudioFadeInDuration:(int)arg1 ;
-(int)audioFadeInDuration;
-(int)audioFadeOutDuration;
-(void)setStartOffsetValidated:(BOOL)arg1 ;
-(BOOL)startOffsetValidated;
-(int)audioType;
-(void)setContentsFromPlist:(id)arg1 inProject:(id)arg2 ;
-(id)themeID;
-(void)setAudioType:(int)arg1 ;
-(void)setThemeID:(id)arg1 ;
-(void)setCachedFades:(BOOL)arg1 ;
-(BOOL)cachedFades;
-(void)setCachedFadeIn:(int)arg1 ;
-(void)setCachedFadeOut:(int)arg1 ;
-(void)validateFades;
-(int)cachedFadeIn;
-(int)cachedFadeOut;
-(id)asBackgroundAudioClip;
-(id)asForegroundAudioClip;
-(BOOL)isBackgroundAudio;
-(id)init;
-(void)setDuration:(int)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(int)startOffset;
-(void)setStartOffset:(int)arg1 ;
@end

