/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:43 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItemWithHrefChildItem.h>

@class CalDAVUpdateOwnerItem, NSURL;

@interface CalDAVCalendarServerResourceChangeElement : CoreDAVItemWithHrefChildItem {

	CalDAVUpdateOwnerItem* _changedBy;

}

@property (nonatomic,readonly) NSURL * fullHrefURL; 
@property (nonatomic,retain) CalDAVUpdateOwnerItem * changedBy;              //@synthesize changedBy=_changedBy - In the implementation block
-(id)copyParseRules;
-(void)setChangedBy:(CalDAVUpdateOwnerItem *)arg1 ;
-(NSURL *)fullHrefURL;
-(CalDAVUpdateOwnerItem *)changedBy;
-(id)init;
@end

