/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:56 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WebBookmarkCollection, WebBookmark;

@interface BAChangeRecord : NSObject {

	WebBookmarkCollection* _collection;
	WebBookmark* _bookmark;
	int _changeType;

}

@property (nonatomic,readonly) WebBookmarkCollection * collection;              //@synthesize collection=_collection - In the implementation block
@property (nonatomic,readonly) WebBookmark * bookmark;                          //@synthesize bookmark=_bookmark - In the implementation block
@property (nonatomic,readonly) int changeType;                                  //@synthesize changeType=_changeType - In the implementation block
-(int)changeType;
-(id)_changedAttributeDescription;
-(id)_changeTypeDescription;
-(id)initWithBookmarkCollection:(id)arg1 bookmark:(id)arg2 changeType:(int)arg3 ;
-(WebBookmarkCollection *)collection;
-(WebBookmark *)bookmark;
-(id)description;
@end

