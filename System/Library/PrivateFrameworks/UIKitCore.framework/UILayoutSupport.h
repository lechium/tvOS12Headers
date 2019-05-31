/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSLayoutYAxisAnchor, NSLayoutDimension;


@protocol UILayoutSupport <NSObject>
@property (nonatomic,readonly) double length; 
@property (readonly) NSLayoutYAxisAnchor * topAnchor; 
@property (readonly) NSLayoutYAxisAnchor * bottomAnchor; 
@property (readonly) NSLayoutDimension * heightAnchor; 
@required
-(double)length;
-(NSLayoutYAxisAnchor *)topAnchor;
-(NSLayoutYAxisAnchor *)bottomAnchor;
-(NSLayoutDimension *)heightAnchor;

@end
