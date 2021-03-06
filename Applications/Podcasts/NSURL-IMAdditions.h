//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@interface NSURL (IMAdditions)
+ (id)dictionaryToEscapedQueryString:(id)arg1;	// IMP=0x00000001001e7624
+ (id)percentEncodedStringToDictionary:(id)arg1;	// IMP=0x00000001001e740c
- (id)cleanUrlToEpisodeGuid;	// IMP=0x00000001001e8194
- (long long)cleanUrlToStoreTrackId;	// IMP=0x00000001001e80d4
- (long long)cleanUrlToStoreId;	// IMP=0x00000001001e7fa4
- (int)setXattr:(id)arg1 named:(id)arg2;	// IMP=0x00000001001e7f14
- (id)xattrNamed:(id)arg1;	// IMP=0x00000001001e7d90
- (id)unescapedPath;	// IMP=0x00000001001e7d24
- (id)lastModifiedDateOfResource;	// IMP=0x00000001001e7c34
- (id)_lastModDateFormatter;	// IMP=0x00000001001e7adc
- (id)URLByReplacingWithScheme:(id)arg1;	// IMP=0x00000001001e79fc
- (id)URLByAppendingQueryString:(id)arg1;	// IMP=0x00000001001e7944
- (id)URLByAppendingHashString:(id)arg1;	// IMP=0x00000001001e788c
- (id)href;	// IMP=0x00000001001e7810
@end

