/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRMarimbaHitBlobSupport
@required
-(void)beginGesture:(id)arg1;
-(BOOL)beginLiveUpdateForHitBlob:(id)arg1;
-(CGPoint*)convertPoint:(CGPoint)arg1 toHitBlob:(id)arg2;
-(BOOL)endLiveUpdateForHitBlob:(id)arg1;
-(void)endGesture:(id)arg1;
-(id)blobHitAtPoint:(CGPoint)arg1 fromObjectsForObjectIDs:(id)arg2 localPoint:(CGPoint*)arg3;
-(BOOL)getOnScreenVertices:(CGPoint)arg1 forHitBlob:(id)arg2;
-(void)doGesture:(id)arg1;
-(void)cancelGesture:(id)arg1;

@end

