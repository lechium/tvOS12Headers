/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIImage;

@interface _UIImageViewPretiledImageCacheKey : NSObject {

	UIImage* _originalImage;
	CGSize _pretiledSize;

}
+(id)cacheKeyWithOriginalImage:(id)arg1 pretiledSize:(CGSize)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

