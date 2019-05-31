/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIStoryboardSegueTemplate.h>

@interface UIStoryboardPresentationSegueTemplate : UIStoryboardSegueTemplate {

	BOOL _useDefaultModalPresentationStyle;
	BOOL _useDefaultModalTransitionStyle;
	long long _modalPresentationStyle;
	long long _modalTransitionStyle;

}

@property (assign,nonatomic) BOOL useDefaultModalPresentationStyle;              //@synthesize useDefaultModalPresentationStyle=_useDefaultModalPresentationStyle - In the implementation block
@property (assign,nonatomic) BOOL useDefaultModalTransitionStyle;                //@synthesize useDefaultModalTransitionStyle=_useDefaultModalTransitionStyle - In the implementation block
@property (assign,nonatomic) long long modalPresentationStyle;                   //@synthesize modalPresentationStyle=_modalPresentationStyle - In the implementation block
@property (assign,nonatomic) long long modalTransitionStyle;                     //@synthesize modalTransitionStyle=_modalTransitionStyle - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(long long)modalPresentationStyle;
-(long long)modalTransitionStyle;
-(void)setModalTransitionStyle:(long long)arg1 ;
-(/*^block*/id)newDefaultPrepareHandlerForSegue:(id)arg1 ;
-(/*^block*/id)newDefaultPerformHandlerForSegue:(id)arg1 ;
-(BOOL)useDefaultModalPresentationStyle;
-(BOOL)useDefaultModalTransitionStyle;
-(void)setUseDefaultModalPresentationStyle:(BOOL)arg1 ;
-(void)setUseDefaultModalTransitionStyle:(BOOL)arg1 ;
@end

