/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:59 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLImageSource.h>

@interface PLPhotoLibraryImageSource : PLImageSource {

	int _imageFormat;

}

@property (nonatomic,readonly) int imageFormat; 
-(unsigned short)sourceIdentifier;
-(int)imageFormat;
-(id)newImageForAsset:(id)arg1 createMetadata:(id*)arg2 ;
-(id)initWithImageFormat:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

