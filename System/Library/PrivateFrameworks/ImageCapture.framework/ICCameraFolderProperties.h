/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:59 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface ICCameraFolderProperties : NSObject {

	NSMutableArray* _files;
	NSMutableArray* _folders;

}

@property (retain) NSMutableArray * files;                //@synthesize files=_files - In the implementation block
@property (retain) NSMutableArray * folders;              //@synthesize folders=_folders - In the implementation block
-(NSMutableArray *)files;
-(void)setFiles:(NSMutableArray *)arg1 ;
-(NSMutableArray *)folders;
-(void)setFolders:(NSMutableArray *)arg1 ;
-(void)dealloc;
@end

