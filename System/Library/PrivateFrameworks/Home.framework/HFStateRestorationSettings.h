/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable, NSUUID, NSString;

@interface HFStateRestorationSettings : NSObject {

	int _notifyRegistrationToken;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) int notifyRegistrationToken;                                      //@synthesize notifyRegistrationToken=_notifyRegistrationToken - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                                          //@synthesize observers=_observers - In the implementation block
@property (nonatomic,copy) NSUUID * selectedHomeIdentifier; 
@property (nonatomic,copy,readonly) NSUUID * selectedRoomIdentifierForSelectedHome; 
@property (nonatomic,copy) NSString * selectedHomeAppTabIdentifier; 
+(id)sharedInstance;
-(id)selectedRoomIdentifierForHomeIdentifier:(id)arg1 ;
-(NSUUID *)selectedRoomIdentifierForSelectedHome;
-(void)saveSelectedRoomIdentifier:(id)arg1 forHomeIdentifier:(id)arg2 ;
-(void)_selectedHomeDidChange;
-(int)notifyRegistrationToken;
-(NSUUID *)selectedHomeIdentifier;
-(id)_roomKeyForHomeIdentifier:(id)arg1 ;
-(id)_homeAppPreferencesValueForKey:(id)arg1 ofClass:(Class)arg2 ;
-(void)_setHomeAppPreferencesValue:(id)arg1 forKey:(id)arg2 ;
-(void)setSelectedHomeIdentifier:(NSUUID *)arg1 ;
-(NSString *)selectedHomeAppTabIdentifier;
-(void)setSelectedHomeAppTabIdentifier:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(void)addObserver:(id)arg1 ;
@end

