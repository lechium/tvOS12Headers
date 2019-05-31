/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface HFWallpaperLegacyFileManager : NSObject {

	NSURL* _wallpaperFolderURL;

}

@property (nonatomic,retain) NSURL * wallpaperFolderURL;              //@synthesize wallpaperFolderURL=_wallpaperFolderURL - In the implementation block
-(NSURL *)wallpaperFolderURL;
-(id)filenameForType:(long long)arg1 variant:(long long)arg2 ;
-(void)migrateCache:(/*^block*/id)arg1 ;
-(id)clearAllWallpapers;
-(void)setWallpaperFolderURL:(NSURL *)arg1 ;
-(id)init;
@end
