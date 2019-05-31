/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:56 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIImage, UIView;

@interface UIAccessibilityHUDItem : NSObject <NSCopying> {

	BOOL _disabledAppearance;
	BOOL _flattenImage;
	BOOL _scaleImage;
	NSString* _title;
	UIImage* _image;
	UIView* _customView;
	UIEdgeInsets _imageInsets;

}

@property (assign,nonatomic) BOOL disabledAppearance;               //@synthesize disabledAppearance=_disabledAppearance - In the implementation block
@property (assign,nonatomic) BOOL flattenImage;                     //@synthesize flattenImage=_flattenImage - In the implementation block
@property (assign,nonatomic) BOOL scaleImage;                       //@synthesize scaleImage=_scaleImage - In the implementation block
@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIImage * image;                       //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) UIEdgeInsets imageInsets;              //@synthesize imageInsets=_imageInsets - In the implementation block
@property (nonatomic,retain) UIView * customView;                   //@synthesize customView=_customView - In the implementation block
+(id)HUDItemForTabBarItem:(id)arg1 ;
+(id)HUDItemForBarButtonItem:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setFlattenImage:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(void)setScaleImage:(BOOL)arg1 ;
-(void)setCustomView:(UIView *)arg1 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 imageInsets:(UIEdgeInsets)arg3 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 imageInsets:(UIEdgeInsets)arg3 scaleImage:(BOOL)arg4 ;
-(UIImage *)image;
-(NSString *)title;
-(UIEdgeInsets)imageInsets;
-(BOOL)scaleImage;
-(BOOL)flattenImage;
-(BOOL)disabledAppearance;
-(void)setDisabledAppearance:(BOOL)arg1 ;
-(UIView *)customView;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCustomView:(id)arg1 ;
@end

