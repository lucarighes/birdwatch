#ifndef org_apache_lucene_index_MergePolicy$OneMerge_H
#define org_apache_lucene_index_MergePolicy$OneMerge_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class CodecReader;
        class MergePolicy$MergeAbortedException;
        class SegmentCommitInfo;
        class MergePolicy$OneMergeProgress;
      }
      namespace store {
        class MergeInfo;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class MergePolicy$OneMerge : public ::java::lang::Object {
         public:
          enum {
            mid_init$_d03990be0130160d,
            mid_checkAborted_f2cc1bce94666404,
            mid_getMergeInfo_88665de6b57af2eb,
            mid_getMergeProgress_a195c5f1b5acc30a,
            mid_getStoreMergeInfo_2404c983e763de89,
            mid_isAborted_8454bd5aa23fd11e,
            mid_mergeFinished_33bb9a5a88dc139c,
            mid_mergeInit_f2cc1bce94666404,
            mid_segString_db9b55ba01e03e4b,
            mid_setAborted_f2cc1bce94666404,
            mid_setMergeInfo_7d313206bbb3a99e,
            mid_totalBytesSize_2e5ae9edcb9b072f,
            mid_totalNumDocs_9972fcc56b44e79d,
            mid_wrapForMerge_5a4a763f0e786638,
            max_mid
          };

          enum {
            fid_estimatedMergeBytes,
            fid_segments,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MergePolicy$OneMerge(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MergePolicy$OneMerge(const MergePolicy$OneMerge& obj) : ::java::lang::Object(obj) {}

          jlong _get_estimatedMergeBytes() const;
          void _set_estimatedMergeBytes(jlong) const;
          ::java::util::List _get_segments() const;

          MergePolicy$OneMerge(const ::java::util::List &);

          void checkAborted() const;
          ::org::apache::lucene::index::SegmentCommitInfo getMergeInfo() const;
          ::org::apache::lucene::index::MergePolicy$OneMergeProgress getMergeProgress() const;
          ::org::apache::lucene::store::MergeInfo getStoreMergeInfo() const;
          jboolean isAborted() const;
          void mergeFinished(jboolean, jboolean) const;
          void mergeInit() const;
          ::java::lang::String segString() const;
          void setAborted() const;
          void setMergeInfo(const ::org::apache::lucene::index::SegmentCommitInfo &) const;
          jlong totalBytesSize() const;
          jint totalNumDocs() const;
          ::org::apache::lucene::index::CodecReader wrapForMerge(const ::org::apache::lucene::index::CodecReader &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(MergePolicy$OneMerge);
        extern PyTypeObject *PY_TYPE(MergePolicy$OneMerge);

        class t_MergePolicy$OneMerge {
        public:
          PyObject_HEAD
          MergePolicy$OneMerge object;
          static PyObject *wrap_Object(const MergePolicy$OneMerge&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
