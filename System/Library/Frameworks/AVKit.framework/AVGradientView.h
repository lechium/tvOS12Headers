/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, NSString;

@interface AVGradientView : UIView

@property (nonatomic,copy) NSArray * colors; 
@property (nonatomic,copy) NSArray * locations; 
@property (assign,nonatomic) CGPoint startPoint; 
@property (assign,nonatomic) CGPoint endPoint; 
@property (nonatomic,copy) NSString * type; 
+(Class)layerClass;
-(NSArray *)locations;
-(CGPoint)endPoint;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)setColors:(NSArray *)arg1 ;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(CGPoint)startPoint;
-(id)_gradientLayer;
-(NSArray *)colors;
-(void)setLocations:(NSArray *)arg1 ;
@end

