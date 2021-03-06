//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMKeyValueStoreSerializer, IMKeyValueStoreTransaction, NSString;

@interface IMKeyValueStoreRequest : NSObject
{
    NSString *_domain;	// 8 = 0x8
    IMKeyValueStoreTransaction *_transaction;	// 16 = 0x10
    NSString *_DSID;	// 24 = 0x18
    id <MZKeyValueStoreOperationDelegate> _delegate;	// 32 = 0x20
    _Bool _shouldAuthenticate;	// 40 = 0x28
    IMKeyValueStoreSerializer *_serializer;	// 48 = 0x30
}

@property(retain, nonatomic) IMKeyValueStoreSerializer *serializer; // @synthesize serializer=_serializer;
@property(nonatomic) _Bool shouldAuthenticate; // @synthesize shouldAuthenticate=_shouldAuthenticate;
@property(nonatomic) id <MZKeyValueStoreOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *DSID; // @synthesize DSID=_DSID;
@property(retain, nonatomic) IMKeyValueStoreTransaction *transaction; // @synthesize transaction=_transaction;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void)scheduleStoreURLOperation:(id)arg1 data:(id)arg2;	// IMP=0x000000010008dba4
- (void)postData:(id)arg1;	// IMP=0x000000010008d7c0
- (void)start;	// IMP=0x000000010008d77c
- (void)dealloc;	// IMP=0x000000010008d6c4
- (id)initWithTransaction:(id)arg1;	// IMP=0x000000010008d65c

@end

