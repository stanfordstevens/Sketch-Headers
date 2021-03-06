//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BCJSONEncoding.h"

@class NSObject<MSCoding>, NSString;

@interface MSJSONArchiveReference : NSObject <BCJSONEncoding>
{
    NSObject<MSCoding> *_referencedObject;
}

@property(readonly, nonatomic) NSObject<MSCoding> *referencedObject; // @synthesize referencedObject=_referencedObject;
- (void).cxx_destruct;
- (id)initWithJSONDecoder:(id)arg1;
- (void)encodeAsJSON:(id)arg1;
- (id)initWithReferenceObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

