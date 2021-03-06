/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSHashTable, IMBusinessNameManager;

@interface IMHandleRegistrar : NSObject {

	NSMutableDictionary* _siblingsMap;
	NSHashTable* _allIMHandles;
	IMBusinessNameManager* _businessNameManager;

}
+(id)sharedInstance;
-(id)allIMHandles;
-(void)_dumpOutAllIMHandlesForAccount:(id)arg1 ;
-(void)clearSiblingCacheForIMHandle:(id)arg1 ;
-(void)registerIMHandle:(id)arg1 ;
-(void)unregisterIMHandle:(id)arg1 ;
-(id)businessNameForUID:(id)arg1 updateHandler:(/*^block*/id)arg2 ;
-(id)_existingAccountSiblingsForHandle:(id)arg1 ;
-(id)_accountSiblingsForHandle:(id)arg1 ;
-(id)_existingChatSiblingsForHandle:(id)arg1 ;
-(id)_chatSiblingsForHandle:(id)arg1 ;
-(id)siblingsForIMHandle:(id)arg1 ;
-(void)_emptySiblingCacheForIMHandleGUID:(id)arg1 ;
-(void)_buildSiblingsForIMHandle:(id)arg1 ;
-(void)_clearSiblingsCacheForIMHandle:(id)arg1 rebuildAfter:(BOOL)arg2 ;
-(void)_addressBookChanged;
-(void)_dumpOutAllIMHandles;
-(id)init;
@end

