/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionRowView.h>

@class MKExpandingLabel, NSString, NSArray;

@interface MKPlaceTextBlockCell : MKPlaceSectionRowView {

	BOOL _constraintsAdded;
	MKExpandingLabel* _textBlock;
	NSString* _textBlockText;
	NSArray* _marginConstraints;

}

@property (nonatomic,retain) MKExpandingLabel * textBlock;                                   //@synthesize textBlock=_textBlock - In the implementation block
@property (nonatomic,retain) NSArray * marginConstraints;                                    //@synthesize marginConstraints=_marginConstraints - In the implementation block
@property (assign,nonatomic) BOOL constraintsAdded;                                          //@synthesize constraintsAdded=_constraintsAdded - In the implementation block
@property (nonatomic,copy) NSString * textBlockText;                                         //@synthesize textBlockText=_textBlockText - In the implementation block
@property (assign,getter=isTextBlockExpanded,nonatomic) BOOL textBlockExpanded; 
@property (nonatomic,copy) id textBlockResizedBlock; 
-(NSString *)textBlockText;
-(MKExpandingLabel *)textBlock;
-(void)setTextBlock:(MKExpandingLabel *)arg1 ;
-(void)_contentSizeDidChange;
-(void)_refreshLayoutMargins;
-(void)setTextBlockText:(NSString *)arg1 ;
-(void)setTextBlockResizedBlock:(id)arg1 ;
-(BOOL)isTextBlockExpanded;
-(void)setTextBlockExpanded:(BOOL)arg1 ;
-(id)textBlockResizedBlock;
-(NSArray *)marginConstraints;
-(void)setMarginConstraints:(NSArray *)arg1 ;
-(BOOL)constraintsAdded;
-(void)setConstraintsAdded:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)layoutMarginsDidChange;
@end

