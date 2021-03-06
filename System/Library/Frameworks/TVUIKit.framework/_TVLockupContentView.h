/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:00 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVUIKit.framework/TVUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVUIKit/TVUIKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <TVUIKit/TVLockupViewComponent.h>

@class NSString;

@interface _TVLockupContentView : UIView <TVLockupViewComponent> {

	CGSize _explicitContentSize;

}

@property (assign,nonatomic) CGSize explicitContentSize;              //@synthesize explicitContentSize=_explicitContentSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)explicitContentSize;
-(id)effectiveContentView;
-(void)updateAppearanceForLockupViewState:(unsigned long long)arg1 ;
-(void)setExplicitContentSize:(CGSize)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)addSubview:(id)arg1 ;
-(CGSize)intrinsicContentSize;
@end

