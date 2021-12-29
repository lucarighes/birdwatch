#ifndef org_apache_lucene_index_MergePolicy$MergeContext_H
#define org_apache_lucene_index_MergePolicy$MergeContext_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Set;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentCommitInfo;
      }
      namespace util {
        class InfoStream;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class MergePolicy$MergeContext : public ::java::lang::Object {
         public:
          enum {
            mid_getInfoStream_05a6766ae71db614,
            mid_getMergingSegments_7dcf4034c6d1a92a,
            mid_numDeletedDocs_a14757c1f6c5c9ec,
            mid_numDeletesToMerge_a14757c1f6c5c9ec,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MergePolicy$MergeContext(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MergePolicy$MergeContext(const MergePolicy$MergeContext& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::util::InfoStream getInfoStream() const;
          ::java::util::Set getMergingSegments() const;
          jint numDeletedDocs(const ::org::apache::lucene::index::SegmentCommitInfo &) const;
          jint numDeletesToMerge(const ::org::apache::lucene::index::SegmentCommitInfo &) const;
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
        extern PyType_Def PY_TYPE_DEF(MergePolicy$MergeContext);
        extern PyTypeObject *PY_TYPE(MergePolicy$MergeContext);

        class t_MergePolicy$MergeContext {
        public:
          PyObject_HEAD
          MergePolicy$MergeContext object;
          static PyObject *wrap_Object(const MergePolicy$MergeContext&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
