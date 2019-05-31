//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"
#import "NSObject.h"

@class NSDate, NSNumber, NSString, TVHJSMediaEntityType;

@protocol TVHJSMediaEntity <NSObject, JSExport>
@property(readonly, copy, nonatomic) NSString *imageLoadParams;
@property(readonly, copy, nonatomic) NSString *playedStateResourceName;
@property(copy, nonatomic) NSString *playedState;
@property(readonly, copy, nonatomic) NSNumber *duration;
@property(readonly, copy, nonatomic) NSString *contentDescription;
@property(readonly, copy, nonatomic) NSNumber *releaseYear;
@property(readonly, copy, nonatomic) NSDate *releaseDate;
@property(readonly, copy, nonatomic) NSDate *addedDate;
@property(readonly, copy, nonatomic) NSNumber *seasonNumber;
@property(readonly, copy, nonatomic) NSString *albumIdentifier;
@property(readonly, copy, nonatomic) NSString *albumTitle;
@property(readonly, copy, nonatomic) NSString *genreTitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *metadataHash;
@property(readonly, copy, nonatomic) NSString *mediaServerIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) TVHJSMediaEntityType *type;
- (NSString *)imageResourceNameWithSize:(NSString *)arg1;
@end

