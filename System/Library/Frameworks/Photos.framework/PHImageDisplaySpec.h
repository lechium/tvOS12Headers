/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Photos/Photos-Structs.h>
@interface PHImageDisplaySpec : NSObject {

	long long _contentMode;
	CGSize _targetSize;
	CGRect _normalizedCropRect;

}

@property (assign,nonatomic) long long contentMode;                  //@synthesize contentMode=_contentMode - In the implementation block
@property (assign,nonatomic) CGSize targetSize;                      //@synthesize targetSize=_targetSize - In the implementation block
@property (assign,nonatomic) CGRect normalizedCropRect;              //@synthesize normalizedCropRect=_normalizedCropRect - In the implementation block
-(CGRect)normalizedCropRect;
-(void)setNormalizedCropRect:(CGRect)arg1 ;
-(id)initWithTargetSize:(CGSize)arg1 ;
-(id)initWithTargetSize:(CGSize)arg1 contentMode:(long long)arg2 ;
-(id)initWithTargetSize:(CGSize)arg1 contentMode:(long long)arg2 normalizedCropRect:(CGRect)arg3 ;
-(CGSize)requestSizeFromFullSizedWidth:(long long)arg1 height:(long long)arg2 ;
-(id)init;
-(id)description;
-(void)setContentMode:(long long)arg1 ;
-(id)shortDescription;
-(long long)contentMode;
-(CGSize)targetSize;
-(void)setTargetSize:(CGSize)arg1 ;
@end

