/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:10 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MREffect.h>
#import <libobjc.A.dylib/MZEffectTiming.h>

@class NSMutableDictionary, NSDictionary, NSMutableArray, NSArray, MRImageProvider, MRImage, MRCroppingSprite;

@interface MREffectDateline : MREffect <MZEffectTiming> {

	NSMutableDictionary* mSprites;
	NSDictionary* mJournal;
	NSMutableArray* mLengths;
	NSMutableArray* mChapterDurations;
	NSMutableArray* mChapters;
	NSMutableDictionary* mText;
	NSMutableDictionary* mChapterDates;
	NSMutableDictionary* mChapterNumDate;
	NSMutableArray* mIndicies;
	NSMutableDictionary* mWeatherImages;
	NSMutableDictionary* mDayImages;
	NSMutableDictionary* mBreakInformation;
	NSMutableDictionary* mMovieProviders;
	NSArray* mSlideInformation;
	BOOL mIsLoaded;
	BOOL mIsRotating;
	BOOL mIsVertical;
	MRImageProvider* mTextBackground;
	MRImageProvider* mQuoteOpen;
	MRImageProvider* mQuoteClose;
	MRImageProvider* mQuoteBox;
	MRImageProvider* mWeatherWindowMask;
	MRImageProvider* mDateWindowMask;
	MRImage* mGrayImage;
	MRCroppingSprite* mChapterSprite;

}

@property (nonatomic,readonly) double phaseInDuration; 
@property (nonatomic,readonly) double mainDuration; 
@property (nonatomic,readonly) double phaseOutDuration; 
+(id)customTimingWithEffectID:(id)arg1 effectAttributes:(id)arg2 slideInformation:(id)arg3 textInformation:(id)arg4 inAspectRatio:(double)arg5 ;
+(BOOL)hasCustomTiming;
+(void)initialize;
-(id)initWithEffectID:(id)arg1 ;
-(double)lowestDisplayTime;
-(double)showTimeForSlideAtIndex:(unsigned long long)arg1 ;
-(double)showDurationForSlideAtIndex:(unsigned long long)arg1 ;
-(double)displayTimeForSlideAtIndex:(unsigned long long)arg1 ;
-(BOOL)isLoadedForTime:(double)arg1 ;
-(void)_loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)_unload;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)beginMorphingToAspectRatio:(double)arg1 withDuration:(double)arg2 ;
-(void)endMorphing;
-(id)elementHitAtPoint:(CGPoint)arg1 withInverseMatrix:(float)arg2 localPoint:(CGPoint*)arg3 ;
-(BOOL)getVerticesCoordinates:(CGPoint*)arg1 withMatrix:(float)arg2 forElement:(id)arg3 ;
-(CGSize)_maxSizeForTextElement:(id)arg1 ;
-(long long)_maxLinesForTextElement:(id)arg1 ;
-(double)displayTimeForTextAtIndex:(unsigned long long)arg1 ;
-(CGSize)_sizeForBreakAspectRatio:(double)arg1 size:(CGSize)arg2 inContext:(id)arg3 ;
-(double)_aspectRatioForSlideIndex:(long long)arg1 ;
-(void)_calculateDurations:(id)arg1 slideInformation:(id)arg2 aspectRatio:(double)arg3 ;
-(void)_updateIndiciesWithAttributes:(id)arg1 ;
-(double)_calculateMainDurationWithAttributes:(id)arg1 ;
-(NSRange)_chapterRangeForSlide:(long long)arg1 startIndex:(long long*)arg2 endIndex:(long long*)arg3 ;
-(double)_startTimeForChapter:(long long)arg1 ;
-(double)_startTimeForSlideIndex:(long long)arg1 inChapter:(long long)arg2 ;
-(double)_movieDurationForSlideAtIndex:(long long)arg1 ;
-(BOOL)_isMovieForSlideAtIndex:(long long)arg1 ;
-(id)_weatherStringForCondition:(unsigned long long)arg1 ;
-(void)_updateSlideProviders:(double)arg1 context:(id)arg2 renderArguments:(id)arg3 ;
-(long long)_chapterIndexForTime:(double)arg1 ;
-(void)_loadTextForChapter:(long long)arg1 context:(id)arg2 ;
-(void)_unloadTextForChapter:(long long)arg1 ;
-(long long)_currentItemForChapter:(long long)arg1 atTime:(double)arg2 forDuration:(double*)arg3 fromTime:(double*)arg4 ;
-(void)_drawGrayChapters:(id)arg1 time:(double)arg2 arguments:(id)arg3 showInfo:(BOOL)arg4 startProgress:(double)arg5 titleEnd:(double)arg6 titleToChapter:(double)arg7 drawPhotos:(BOOL)arg8 startIndex:(long long)arg9 exit:(double)arg10 isExiting:(BOOL)arg11 chapterIntro:(double)arg12 chapterProgress:(double)arg13 ;
-(double)_offsetForChapterIndex:(long long)arg1 layoutIndex:(long long)arg2 aspectRatio:(double)arg3 ;
-(void)_drawChapterDateSwitch:(long long)arg1 to:(long long)arg2 progress:(double)arg3 time:(double)arg4 arguments:(id)arg5 context:(id)arg6 ;
-(void)_cleanUpDictionary:(id)arg1 ;
-(id)_textImageForString:(id)arg1 string2:(id)arg2 type:(long long)arg3 inContext:(id)arg4 firstLine:(CGRect*)arg5 lastLine:(CGRect*)arg6 ;
-(id)_textImageForString:(id)arg1 type:(long long)arg2 inContext:(id)arg3 ;
-(void)_addTextImage:(id)arg1 forKey:(id)arg2 inDictionary:(id)arg3 ;
-(BOOL)_timeIs24HourFormat;
-(void)_loadDateForChapter:(long long)arg1 context:(id)arg2 ;
-(void)setPixelSize:(CGSize)arg1 ;
-(void)setAttributes:(id)arg1 ;
-(void)_cleanup;
@end

