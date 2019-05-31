/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKPlaceSectionRowView.h>

@class NSLayoutConstraint, _MKUILabel;

@interface MKPlaceEncyclopedicFactoidView : MKPlaceSectionRowView {

	NSLayoutConstraint* _baselineToTopConstraint;
	NSLayoutConstraint* _baselineToBottomConstraint;
	NSLayoutConstraint* _baselineToBaselineConstraint;
	_MKUILabel* _keyLabel;
	_MKUILabel* _valueLabel;

}

@property (nonatomic,retain) _MKUILabel * keyLabel;                //@synthesize keyLabel=_keyLabel - In the implementation block
@property (nonatomic,retain) _MKUILabel * valueLabel;              //@synthesize valueLabel=_valueLabel - In the implementation block
-(id)initWithTextItem:(id)arg1 ;
-(void)_contentSizeDidChange;
-(id)_keyLabelWithString:(id)arg1 ;
-(id)_valueLabelWithString:(id)arg1 ;
-(void)setUpConstraints;
-(_MKUILabel *)keyLabel;
-(void)setKeyLabel:(_MKUILabel *)arg1 ;
-(void)setValueLabel:(_MKUILabel *)arg1 ;
-(_MKUILabel *)valueLabel;
@end

