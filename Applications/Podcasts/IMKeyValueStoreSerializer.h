//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMKeyValueStoreTransaction;

@interface IMKeyValueStoreSerializer : NSObject
{
    IMKeyValueStoreTransaction *_transaction;	// 8 = 0x8
}

@property(retain, nonatomic) IMKeyValueStoreTransaction *transaction; // @synthesize transaction=_transaction;
- (struct MZKeyValueStoreDataVerionPair)objectVersionPairForKey:(id)arg1;	// IMP=0x000000010009016c
- (id)payloadWithNode:(id)arg1;	// IMP=0x000000010009012c
- (id)keys;	// IMP=0x0000000100090060
- (id)dataWithNodes:(id)arg1;	// IMP=0x000000010008ff84
- (id)baseDictionary;	// IMP=0x000000010008fe78
- (_Bool)_isRemoveAllSinceDomainVersion;	// IMP=0x000000010008fe1c
- (_Bool)_isGetAllSinceDomainVersionRequest;	// IMP=0x000000010008fdc0
- (id)sinceDomainVersion;	// IMP=0x000000010008fcf4
- (id)payload;	// IMP=0x000000010008fa60
- (void)dealloc;	// IMP=0x000000010008fa04
- (id)initWithTransaction:(id)arg1;	// IMP=0x000000010008f99c

@end
