#ifndef org_apache_lucene_index_SegmentCommitInfo_H
#define org_apache_lucene_index_SegmentCommitInfo_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    class Collection;
    class Set;
  }
  namespace lang {
    class Class;
    class Integer;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentCommitInfo;
        class SegmentInfo;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class SegmentCommitInfo : public ::java::lang::Object {
         public:
          enum {
            mid_init$_869a0f81e4dced98,
            mid_clone_88665de6b57af2eb,
            mid_files_d4dfbf7a26ff41df,
            mid_getDelCount_9972fcc56b44e79d,
            mid_getDelGen_2e5ae9edcb9b072f,
            mid_getDocValuesGen_2e5ae9edcb9b072f,
            mid_getDocValuesUpdatesFiles_1c3426541413a55d,
            mid_getFieldInfosFiles_7dcf4034c6d1a92a,
            mid_getFieldInfosGen_2e5ae9edcb9b072f,
            mid_getId_cf386cdb1bbd339f,
            mid_getNextDelGen_2e5ae9edcb9b072f,
            mid_getNextDocValuesGen_2e5ae9edcb9b072f,
            mid_getNextFieldInfosGen_2e5ae9edcb9b072f,
            mid_getSoftDelCount_9972fcc56b44e79d,
            mid_hasDeletions_8454bd5aa23fd11e,
            mid_hasFieldUpdates_8454bd5aa23fd11e,
            mid_setDocValuesUpdatesFiles_408bd889ee3beae5,
            mid_setFieldInfosFiles_d5a4a8d4b806f0ba,
            mid_sizeInBytes_2e5ae9edcb9b072f,
            mid_toString_db9b55ba01e03e4b,
            mid_toString_d7593acad64ef635,
            max_mid
          };

          enum {
            fid_info,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SegmentCommitInfo(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SegmentCommitInfo(const SegmentCommitInfo& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::index::SegmentInfo _get_info() const;

          SegmentCommitInfo(const ::org::apache::lucene::index::SegmentInfo &, jint, jint, jlong, jlong, jlong, const JArray< jbyte > &);

          SegmentCommitInfo clone() const;
          ::java::util::Collection files() const;
          jint getDelCount() const;
          jlong getDelGen() const;
          jlong getDocValuesGen() const;
          ::java::util::Map getDocValuesUpdatesFiles() const;
          ::java::util::Set getFieldInfosFiles() const;
          jlong getFieldInfosGen() const;
          JArray< jbyte > getId() const;
          jlong getNextDelGen() const;
          jlong getNextDocValuesGen() const;
          jlong getNextFieldInfosGen() const;
          jint getSoftDelCount() const;
          jboolean hasDeletions() const;
          jboolean hasFieldUpdates() const;
          void setDocValuesUpdatesFiles(const ::java::util::Map &) const;
          void setFieldInfosFiles(const ::java::util::Set &) const;
          jlong sizeInBytes() const;
          ::java::lang::String toString() const;
          ::java::lang::String toString(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(SegmentCommitInfo);
        extern PyTypeObject *PY_TYPE(SegmentCommitInfo);

        class t_SegmentCommitInfo {
        public:
          PyObject_HEAD
          SegmentCommitInfo object;
          static PyObject *wrap_Object(const SegmentCommitInfo&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
