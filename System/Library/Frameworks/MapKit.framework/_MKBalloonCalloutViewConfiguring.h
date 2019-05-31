/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIColor, UIImage, UIView;


@protocol _MKBalloonCalloutViewConfiguring <NSObject>
@property (getter=_balloonCalloutStyle,nonatomic,readonly) long long balloonCalloutStyle; 
@property (getter=_balloonTintColor,nonatomic,readonly) UIColor * balloonTintColor; 
@property (getter=_balloonStrokeColor,nonatomic,readonly) UIColor * balloonStrokeColor; 
@property (getter=_balloonImage,nonatomic,readonly) UIImage * balloonImage; 
@property (getter=_balloonContentView,nonatomic,readonly) UIView * balloonContentView; 
@property (getter=_balloonInnerStrokeColor,nonatomic,readonly) UIColor * balloonInnerStrokeColor; 
@optional
-(id)_balloonInnerStrokeColor;
-(id)_balloonContentView;
-(BOOL)_balloonCalloutShouldOriginateFromSmallSize:(double*)arg1;

@required
-(id)_balloonTintColor;
-(id)_balloonStrokeColor;
-(id)_balloonImage;
-(long long)_balloonCalloutStyle;

@end

