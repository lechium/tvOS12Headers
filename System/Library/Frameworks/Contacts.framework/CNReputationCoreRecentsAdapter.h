/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CRRecentContactsLibrary;

@interface CNReputationCoreRecentsAdapter : NSObject {

	CRRecentContactsLibrary* _library;

}

@property (nonatomic,readonly) CRRecentContactsLibrary * library;              //@synthesize library=_library - In the implementation block
-(id)recentContactsForHandle:(id)arg1 ;
-(id)initWithRecentContactsLibrary:(id)arg1 ;
-(CRRecentContactsLibrary *)library;
-(id)init;
@end
