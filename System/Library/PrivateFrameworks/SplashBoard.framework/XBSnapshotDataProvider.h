/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class XBSnapshotDataProviderContext;


@protocol XBSnapshotDataProvider <NSObject>
@property (nonatomic,retain,readonly) XBSnapshotDataProviderContext * context; 
@optional
-(BOOL)hasProtectedContent;
-(id)fetchImageData:(out CGAffineTransform*)arg1;
-(id)fetchImage;
-(id)fallbackSnapshotDataProvider;
-(void)invalidateImage;

@required
-(XBSnapshotDataProviderContext *)context;

@end
