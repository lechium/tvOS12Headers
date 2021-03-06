/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/MiroPosterViewController.h>

@class NSString, MiroTitleSubtitleView;

@interface MiroPairedPosterViewController : MiroPosterViewController {

	NSString* _secondaryTitleFontName;
	MiroTitleSubtitleView* _secondaryTitleSubtitleView;

}

@property (nonatomic,retain) MiroTitleSubtitleView * secondaryTitleSubtitleView;              //@synthesize secondaryTitleSubtitleView=_secondaryTitleSubtitleView - In the implementation block
@property (nonatomic,retain) NSString * secondaryTitleFontName;                               //@synthesize secondaryTitleFontName=_secondaryTitleFontName - In the implementation block
@property (assign,nonatomic) double percent; 
-(void)setSubtitleText:(id)arg1 ;
-(void)setTitleScale:(double)arg1 ;
-(void)updateSubtitleTitleLabelForSize:(CGSize)arg1 ;
-(id)initWithTextFieldSize:(CGSize)arg1 ;
-(MiroTitleSubtitleView *)secondaryTitleSubtitleView;
-(void)setSecondaryTitleSubtitleView:(MiroTitleSubtitleView *)arg1 ;
-(double)percent;
-(void)setPercent:(double)arg1 ;
-(void)setSecondaryTitleFontName:(NSString *)arg1 ;
-(NSString *)secondaryTitleFontName;
-(void)setTitleText:(id)arg1 ;
@end

