/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _UIBoundingPathBitmap : NSObject <NSSecureCoding> {

	UIBoundingPathBitmapData* _bitmapData;

}

@property (nonatomic,readonly) UIBoundingPathBitmapData* bitmapData;              //@synthesize bitmapData=_bitmapData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(UIBoundingPathBitmapData*)bitmapData;
-(id)boundingPathBitmapWithRect:(UIIntegralRect)arg1 ;
-(id)initWithBitmapData:(UIBoundingPathBitmapData*)arg1 ;
-(id)initWithSize:(UIIntegralSize)arg1 containsPoint:(/*^block*/id)arg2 ;
@end

