/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class NSArray, IKAudioElement, UIColor;

@interface IKBackgroundElement : IKViewElement

@property (nonatomic,retain,readonly) NSArray * images; 
@property (nonatomic,retain,readonly) IKAudioElement * audio; 
@property (nonatomic,readonly) double transitionInterval; 
@property (nonatomic,retain,readonly) UIColor * backgroundColor; 
-(IKAudioElement *)audio;
-(double)transitionInterval;
-(UIColor *)backgroundColor;
-(NSArray *)images;
@end

