/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/IPAGeometryOperator.h>

@interface IPACropOperator : IPAGeometryOperator {

	CGRect _cropRect;

}
+(id)operatorWithIdentifier:(id)arg1 cropRect:(CGRect)arg2 ;
+(id)operatorWithCropRect:(CGRect)arg1 ;
-(id)transformForGeometry:(id)arg1 ;
-(id)description;
@end
