/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray;

@interface BookmarkDAVMoveURLRewriter : NSObject {

	NSDictionary* _remoteMoveMap;
	NSArray* _sortedRemoteSourceServerIDs;

}
-(id)initWithRemoteMoveMap:(id)arg1 ;
-(id)URLByRewritingURL:(id)arg1 ;
-(id)createURLByRewritingURL:(id)arg1 ;
-(id)_depthSortedRemoteSourceServerIDs;
-(id)init;
-(void)dealloc;
@end

