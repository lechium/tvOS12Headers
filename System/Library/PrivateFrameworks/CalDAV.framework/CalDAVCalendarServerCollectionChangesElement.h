/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:43 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalDAV/CalDAVCalendarServerResourceChangeElement.h>

@interface CalDAVCalendarServerCollectionChangesElement : CalDAVCalendarServerResourceChangeElement {

	long long _created;
	long long _updated;
	long long _deleted;

}

@property (assign,nonatomic) long long created;              //@synthesize created=_created - In the implementation block
@property (assign,nonatomic) long long updated;              //@synthesize updated=_updated - In the implementation block
@property (assign,nonatomic) long long deleted;              //@synthesize deleted=_deleted - In the implementation block
-(void)setUpdated:(long long)arg1 ;
-(long long)updated;
-(void)setDeleted:(long long)arg1 ;
-(long long)deleted;
-(id)copyParseRules;
-(void)setCreatedItem:(id)arg1 ;
-(void)setUpdatedItem:(id)arg1 ;
-(void)setDeletedItem:(id)arg1 ;
-(void)setCreated:(long long)arg1 ;
-(long long)created;
-(id)init;
@end

