#ifndef org_apache_lucene_index_IndexFileNames_H
#define org_apache_lucene_index_IndexFileNames_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace regex {
      class Pattern;
    }
  }
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class IndexFileNames : public ::java::lang::Object {
         public:
          enum {
            mid_fileNameFromGeneration_1ccae75d8ea483b8,
            mid_getExtension_9bfa75c9f141b67f,
            mid_matchesExtension_11e80e7a1d57e4b9,
            mid_parseGeneration_b1e05207ec98e246,
            mid_parseSegmentName_9bfa75c9f141b67f,
            mid_segmentFileName_e0ba5c0ee7c471ff,
            mid_stripExtension_9bfa75c9f141b67f,
            mid_stripSegmentName_9bfa75c9f141b67f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexFileNames(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexFileNames(const IndexFileNames& obj) : ::java::lang::Object(obj) {}

          static ::java::util::regex::Pattern *CODEC_FILE_PATTERN;
          static ::java::lang::String *OLD_SEGMENTS_GEN;
          static ::java::lang::String *PENDING_SEGMENTS;
          static ::java::lang::String *SEGMENTS;

          static ::java::lang::String fileNameFromGeneration(const ::java::lang::String &, const ::java::lang::String &, jlong);
          static ::java::lang::String getExtension(const ::java::lang::String &);
          static jboolean matchesExtension(const ::java::lang::String &, const ::java::lang::String &);
          static jlong parseGeneration(const ::java::lang::String &);
          static ::java::lang::String parseSegmentName(const ::java::lang::String &);
          static ::java::lang::String segmentFileName(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &);
          static ::java::lang::String stripExtension(const ::java::lang::String &);
          static ::java::lang::String stripSegmentName(const ::java::lang::String &);
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
        extern PyType_Def PY_TYPE_DEF(IndexFileNames);
        extern PyTypeObject *PY_TYPE(IndexFileNames);

        class t_IndexFileNames {
        public:
          PyObject_HEAD
          IndexFileNames object;
          static PyObject *wrap_Object(const IndexFileNames&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
