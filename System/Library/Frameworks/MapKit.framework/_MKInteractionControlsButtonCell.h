/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIView, UIImageView, UILabel, _UIFloatingContentView, UIImage, NSString;

@interface _MKInteractionControlsButtonCell : UICollectionViewCell {

	UIView* _backgroundView;
	UIImageView* _imageView;
	UILabel* _label;
	_UIFloatingContentView* _floatingView;

}

@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,copy) NSString * title; 
-(void)setTitle:(NSString *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(NSString *)title;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
@end

