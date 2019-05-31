/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, OKMediaFeeder, OKProducerPreset;

@interface OKProducerSettings : NSObject {

	NSArray* _guidelines;
	OKMediaFeeder* _mediaFeeder;
	NSArray* _audioURLs;
	OKProducerPreset* _preset;

}

@property (retain) OKProducerPreset * preset;                //@synthesize preset=_preset - In the implementation block
@property (retain) NSArray * guidelines;                     //@synthesize guidelines=_guidelines - In the implementation block
@property (retain) OKMediaFeeder * mediaFeeder;              //@synthesize mediaFeeder=_mediaFeeder - In the implementation block
@property (retain) NSArray * audioURLs; 
-(NSArray *)guidelines;
-(NSArray *)audioURLs;
-(void)setPreset:(OKProducerPreset *)arg1 ;
-(void)setGuidelines:(NSArray *)arg1 ;
-(void)setMediaFeeder:(OKMediaFeeder *)arg1 ;
-(OKProducerPreset *)preset;
-(OKMediaFeeder *)mediaFeeder;
-(void)setAudioURLs:(NSArray *)arg1 ;
-(void)dealloc;
@end

