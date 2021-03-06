/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLChangeNotification.h>

@class UIImage, NSString;

@interface PLCameraPreviewImageWellChangeNotification : PLChangeNotification {

	UIImage* _image;
	NSString* _uuid;

}

@property (nonatomic,retain,readonly) UIImage * image; 
@property (nonatomic,retain,readonly) NSString * assetUUID; 
+(id)notification;
-(NSString *)assetUUID;
-(id)init;
-(void)dealloc;
-(id)userInfo;
-(id)name;
-(id)description;
-(UIImage *)image;
-(id)object;
-(id)_init;
@end

